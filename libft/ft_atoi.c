/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:26:48 by kahori            #+#    #+#             */
/*   Updated: 2023/10/04 15:22:27 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

// overflow
static int	ft_overflow(int sign, long num, long next_num)
{
	if (sign == 1 && ((num > LONG_MAX / 10) || (LONG_MAX / 10 == num
				&& next_num > LONG_MAX % 10)))
		return (-1);
	if (sign == -1 && ((num > LONG_MAX / 10) || (LONG_MAX / 10 == num
				&& next_num > LONG_MAX % 10 + 1)))
		return (0);
	return (num);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						sign;
	int						check;
	unsigned long long int	result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		check = ft_overflow(sign, result, str[i] - '0');
		if (result > 0 && (check == 0 || check == -1))
			return (check);
		result = result * 10 + (str[i++] - '0');
	}
	return ((int)(result * sign));
}

// int main(void)
// {
// 	char *str = "2147483648";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	return (0);
// }
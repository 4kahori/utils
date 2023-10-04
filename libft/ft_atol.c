/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabura <kabura@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:42:57 by kabura            #+#    #+#             */
/*   Updated: 2023/09/23 17:44:38 by kabura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_sign(int n)
{
	if (n == '-')
		return (-1);
	return (1);
}

//ft_atol: 文字列をlong型に変換して返す
long	ft_atol(const char *str)
{
	int	i;
	int	sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
	|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = ft_sign(str[i++]);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (long)(str[i] - '0');
		i++;
	}
	return (num * (long)sign);
}
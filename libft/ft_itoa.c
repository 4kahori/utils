/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:00:08 by kahori            #+#    #+#             */
/*   Updated: 2023/05/28 16:00:08 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
//桁数を数える関数
static size_t	ft_ketasuu(long long int n)
{
	size_t	keta;

	keta = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		keta++;
	}
	while (n)
	{
		n /= 10;
		keta++;
	}
	return (keta);
}
//itoa関数 10進数を文字列に変換する関数
char	*ft_itoa(int n)
{
	char	*result;
	size_t	keta;
	int		i;

	keta = ft_ketasuu(n);
	result = malloc(sizeof(char) * (keta + 1));
	if (result == NULL)
		return (NULL);
	result[keta] = '\0';
	i = n;
	while (keta--)
	{
		if (i < 0)
			result[keta] = -(i % 10) + '0';
		else
			result[keta] = (i % 10) + '0';
		i /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

#include <libc.h>
int main()
{
    int number = -12345;
    char *str = ft_itoa(number);
    printf("Integer: %d\nString: %s\n", number, str);
    free(str);

    return 0;
}
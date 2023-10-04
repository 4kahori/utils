/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:53:09 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 11:12:34 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//メモリ領域の比較を行う関数
//s1とs2の最初のnバイトを比較する
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// #include <libc.h>
// int main (void)
// {
// 	char str1[] = "hello";
// 	char str2[] = "hello";
// 	char str3[] = "hello";

// 	printf("memcmp: %d\n", memcmp(str1, str2, 5));
// 	printf("ft_memcmp: %d\n", ft_memcmp(str1, str3, 5));
// 	return (0);
// }
// // memcmp: 0
// // ft_memcmp: 0

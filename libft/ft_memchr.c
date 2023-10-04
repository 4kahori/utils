/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:37:25 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 11:12:37 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//メモリ領域の先頭から指定した文字を探す
//文字が見つかった場合はその文字へのポインタを返す
//文字が見つからなかった場合はNULLを返す
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}

// #include <libc.h>
// int main (void)
// {
// 	char str[] = "hello";
// 	char *p;
// 	char *q;

// 	p = memchr(str, 'l', 5);
// 	q = ft_memchr(str, 'l', 5);
// 	printf("memchr: %s\n", p);
// 	printf("ft_memchr: %s\n", q);
// 	return (0);
// }
// // memchr: llo
// // ft_memchr: llo

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:49:00 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 11:22:12 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 文字列 src からサイズ size で文字列 dest にコピーする
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

// #include <libc.h>
// int main (void)
// {
// 	char *src = "hello";
// 	char dest[10];
// 	size_t size = 3;
// 	size_t ret = ft_strlcpy(dest, src, size);
// 	printf("%zu\n", ret);
// 	printf("%s\n", dest);
// 	return (0);
// }

// //kekka 5
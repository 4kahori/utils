/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:48:08 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 11:22:21 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	if (!dst && dstsize == 0)
		return (ft_strlen(src)
		);
	if (!src)
		return (ft_strlen(dst)
		);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] != '\0' && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}

// #include <libc.h>
// int main()
// {
//     char destination[20] = "Hello, ";
//     char source[] = "world!";
//     size_t dstsize = sizeof(destination);

//     printf("Before ft_strlcat: %s\n", destination);
//     size_t result = ft_strlcat(destination, source, dstsize);
//     printf("After ft_strlcat: %s\n", destination);
//     printf("Result: %zu\n", result);

//     return 0;
// }
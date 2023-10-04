/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:27:14 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 10:54:13 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// //ft_bzero関数は、メモリ領域sの先頭nバイトを0で埋める関数。
// int main (void)
// {
// 	char buffer[10] = "hello";
// 	size_t size = sizeof(buffer);

// 	printf("buffer before ft_bzero: %s\n", buffer);
// 	ft_bzero(buffer, size);
// 	printf("buffer after ft_bzero: %s\n", buffer);
// 	return (0);
// }
// // buffer before ft_bzero: hello
// // buffer after ft_bzero:

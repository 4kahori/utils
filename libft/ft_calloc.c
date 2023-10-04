/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:08:27 by kahori            #+#    #+#             */
/*   Updated: 2023/10/04 13:11:18 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

// メモリを0で埋める
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && (count * size) / size != count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}


// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *ptr;
// 	ptr = ft_calloc(10, sizeof(char));
// 	printf("%s\n", ptr);
// 	free(ptr);
// 	return (0);
// }
// // 0が10個表示される
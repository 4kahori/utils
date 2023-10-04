/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:53:15 by kahori            #+#    #+#             */
/*   Updated: 2023/05/28 16:35:34 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//メモリー領域src の先頭 n バイトを メモリー領域destにコピーする
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((const unsigned char *)src)[i
				- 1];
			i--;
		}
	}
	return (dest);
}

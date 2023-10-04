/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:50:05 by kahori            #+#    #+#             */
/*   Updated: 2023/05/28 19:54:42 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//文字列を比較する関数
//s1とs2の最大n文字を比較する
int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] - (unsigned char)s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

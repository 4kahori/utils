/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:13:49 by kahori            #+#    #+#             */
/*   Updated: 2023/10/04 13:11:18 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

//文字列s内の最後の文字cを検索する
//文字cが見つかった場合はその位置へのポインタを返す
char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			i;
	int			len;

	ptr = (char *)s;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (ptr[len - i] == (char)c)
			return ((char *)ptr + len - i);
		i++;
	}
	return (NULL);
}

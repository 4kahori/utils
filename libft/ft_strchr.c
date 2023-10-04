/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:38:43 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 11:12:21 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//文字列strから文字cを検索する
//文字cが見つかった場合は、その文字へのポインタを返す
char	*ft_strchr(const char *str, int c)
{
	const char	*result;
	char		ch;

	ch = (char)c;
	result = str;
	while (*result != '\0')
	{
		if (*result == ch)
			return ((char *)result);
		result++;
	}
	if (*result == ch)
		return ((char *)result);
	return (NULL);
}

// #include <libc.h>
// int main (void)
// {
// 	char str[] = "hello";
// 	char *p;
// 	char *q;
// 	char *r;
// 	char *s;

// 	p = strchr(str, 'l');
// 	q = ft_strchr(str, 'l');
// 	r = strchr(str, 'a');
// 	s = ft_strchr(str, 'a');
// 	printf("strchr: %s\n", p);
// 	printf("ft_strchr: %s\n", q);
// 	printf("strchr: %s\n", r);
// 	printf("ft_strchr: %s\n", s);
// 	return (0);
// }

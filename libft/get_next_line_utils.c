/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:16:23 by kahori            #+#    #+#             */
/*   Updated: 2023/09/08 17:54:43 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"
#include "libft.h"

size_t	gnl_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	gnl_strchr(const char *str, char c)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*result;
	int		s1_len;
	int		s2_len;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		*s1 = '\0';
	}
	s1_len = gnl_strlen(s1);
	s2_len = gnl_strlen(s2);
	result = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (!result)
		return (0);
	gnl_strcpy(result, s1, s1_len);
	gnl_strcpy(result + s1_len, s2, s2_len + 1);
	free(s1);
	return (result);
}

char	*gnl_strcpy(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

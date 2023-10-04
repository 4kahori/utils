/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:11:05 by kahori            #+#    #+#             */
/*   Updated: 2023/10/04 13:11:18 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
//`ft_countwords()`は文字列sの中に文字cが出てくる回数を返す関数。
//substr_len()は文字列sの中に文字cが出てくる回数を返す関数。
//ft_free()は文字列sの中に文字cが出てくる回数を返す関数。
//ft_split()は文字列sの中に文字cが出てくる回数を返す関数。
static int	ft_countwords(const char *s, char c)
{
	size_t	i;
	size_t	t;

	i = -1;
	t = 0;
	while (s[++i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1]))
			t++;
		if (!i && s[i] != c)
			t++;
	}
	return (t);
}

static	int	substr_len(const char *s, char c, int i)
{
	int	t;

	t = 0;
	while (s[i] && s[i] != c)
	{
		t++;
		i++;
	}
	return (t);
}

static	int	ft_free(char **tab, char *s, int i)
{
	if (!s)
	{
		while (i)
			free(tab[i--]);
		free(tab);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		t;
	char	**tab;

	i = -1;
	t = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c)
		{
			tab[t] = ft_substr(s, i, substr_len(s, c, i));
			if (ft_free(tab, tab[t], t))
				return (NULL);
			i += substr_len(s, c, i) - 1;
			t++;
		}
	}
	tab[t] = NULL;
	return (tab);
}

// #include <libc.h>
// int main (void)
// {
// 	char **tab;
// 	int i;

// 	i = 0;
// 	tab = ft_split("split  ||this|for|me|||||!|", '|');
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
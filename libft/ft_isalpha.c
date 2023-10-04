/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:31:04 by kahori            #+#    #+#             */
/*   Updated: 2023/10/04 13:11:18 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_isalpha(int i)
{
	return (('A' <= i && i <= 'Z') || ('a' <= i && i <= 'z'));
}

// int main (void)
// {
// 	int i;
// 	int j;
// 	int	k;

// 	i = 'a';
// 	j = '1';
// 	k = '/';
// 	printf("ft_isalpha: %d\n", ft_isalpha(i));
// 	printf("ft_isalpha: %d\n", ft_isalpha(j));
// 	printf("ft_isalpha: %d\n", ft_isalpha(k));
// 	return (0);
// }
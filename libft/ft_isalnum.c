/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:37:08 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 11:00:41 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	return (ft_isalpha(i) || ft_isdigit(i));
}

// int main(void)
// {
// 	int i;
// 	int j;
// 	int	k;

// 	i = 'a';
// 	j = '1';
// 	k = '/';
// 	printf("ft_isalnum: %d\n", ft_isalnum(i));
// 	printf("ft_isalnum: %d\n", ft_isalnum(j));
// 	printf("ft_isalnum: %d\n", ft_isalnum(k));
// 	return (0);
// }
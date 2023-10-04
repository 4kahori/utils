/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 23:50:29 by kahori            #+#    #+#             */
/*   Updated: 2023/05/30 11:11:43 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//数値を指定したファイルディスクリプタに出力する
void	ft_putnbr_fd(int n, int fd)
{
	if (0 <= n && n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else if (n < 0)
	{
		if (n == INT_MIN)
		{
			ft_putstr_fd("-2147483648", fd);
		}
		else
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(-n, fd);
		}
	}
}

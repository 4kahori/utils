/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 23:47:23 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 11:07:44 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//文字を指定したファイルディスクリプタに出力する
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

//fd = 1 は標準出力
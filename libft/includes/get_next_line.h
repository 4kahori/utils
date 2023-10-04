/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:09:45 by kahori            #+#    #+#             */
/*   Updated: 2023/09/08 17:54:48 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4242
# endif

int		gnl_strchr(const char *str, char c);
char	*gnl_strjoin(char *s1, char *s2);
size_t	gnl_strlen(const char *str);
char	*gnl_strcpy(char *s1, char *s2, int n);
char	*ft_readfile(int fd, char *backup);
char	*get_line(char *backup);
char	*reset_backup(char *backup);
char	*get_next_line(int fd);

#endif
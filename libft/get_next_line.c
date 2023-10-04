/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:11:36 by kahori            #+#    #+#             */
/*   Updated: 2023/09/08 17:54:47 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"
#include "libft.h"

char	*ft_readfile(int fd, char *backup)
{
	ssize_t	read_size;
	char	*buff;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	read_size = 1;
	while (read_size != 0 && (!gnl_strchr(backup, '\n')))
	{
		read_size = read(fd, buff, BUFFER_SIZE);
		if (read_size == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_size] = '\0';
		backup = gnl_strjoin(backup, buff);
	}
	free(buff);
	return (backup);
}

char	*get_line(char *backup)
{
	int		i;
	char	*line;

	i = 0;
	if (!backup[i])
		return (NULL);
	while (backup[i] && backup[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	gnl_strcpy(line, backup, i + 1);
	return (line);
}

char	*reset_backup(char *backup)
{
	int		i;
	char	*line;

	i = 0;
	if (!backup)
		return (NULL);
	while (backup[i] && backup[i] != '\n')
		i++;
	if (!backup[i])
	{
		free(backup);
		return (NULL);
	}
	line = malloc(sizeof(char) * (gnl_strlen(backup) - i + 1));
	if (!line)
		return (NULL);
	i++;
	gnl_strcpy(line, backup + i, gnl_strlen(backup + i));
	free(backup);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*backup;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	backup = ft_readfile(fd, backup);
	if (!backup)
		return (NULL);
	line = get_line(backup);
	backup = reset_backup(backup);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>
// #include <unistd.h>

// int	main(int argc, char *argv[])
// {
// 	int	fd;
// 	int	i;

// 	argc = 0;
// 	i = 1;
// 	fd = open(argv[1], O_RDONLY);
// 	while (i <= 11)
// 	{
// 		printf("|%d : %s", i, get_next_line(fd));
// 		i++;
// 	}
// 	close(fd);
// 	return (0);
// }

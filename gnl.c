/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   owngnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:05:16 by mliew             #+#    #+#             */
/*   Updated: 2022/07/11 16:38:04 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*stash;
	char		*line;
	int			byte_read;

	byte_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (stash == NULL)
		stash = "";
	while (byte_read > 0)
	{
		byte_read = read(fd, buf, BUFFER_SIZE);
		buf[byte_read] = '\0';
		stash = ft_strjoin(stash, buf);
	}
	if (check_char(stash, '\n'))
	{
		line = ft_substr(stash, 0, ft_strlen(stash, '\n'));
		stash = ft_strdup((stash) + ft_strlen(stash, '\n') + 1);
	}
	else
	{
		line = stash;
		stash = NULL;
	}
	return (line);
}

int	main(void)
{
	int	fd = open("text.txt", O_RDONLY);
	printf("{%s}\n", get_next_line(fd));
	printf("{%s}\n", get_next_line(fd));
	printf("{%s}\n", get_next_line(fd));
	printf("{%s}\n", get_next_line(fd));
	printf("{%s}\n", get_next_line(fd));
	printf("{%s}\n", get_next_line(fd));
}
	
	// int		fd[3];
	// char	*buf1;

	// fd[0] = open("test.txt", O_RDWR);
	// fd[1] = open("test2.txt", O_RDONLY);

	// buf1 = "hello";
	// printf("fd0: %i fd1: %i\n", fd[0], fd[1]);
	// close(fd[1]);
	// fd[2] = open("test3.txt", O_RDONLY);
	// printf("fd2: %i\n", fd[2]);
	// write(fd[0], buf1, 6);
	// write(1, buf1, 6);
	// close(fd[0]);
	// return (0);
	// int	fd = open("test.txt", O_RDONLY);
	// char	buf[BUFFER_SIZE];
	// int	r;
	// while ((r = read(fd, buf, BUFFER_SIZE) > 0))
	// 	printf("%d\n", fd);

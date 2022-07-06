/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:52:03 by mliew             #+#    #+#             */
/*   Updated: 2022/07/06 17:55:01 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	appendline(

char	*get_next_line(int fd)
{
	char	buf[BUFFER_SIZE];
	char	*tmp;
	int		red;

	if (fd < 0)
		return(NULL)
	
	while (r = read(fd, buf, BUFFER_SIZE) > 0)
	
	tmp = ft_strjoin(tmp, ft_strchr(buf, '\n');
	tmp = ft_strjoin(tmp, "\0");
	return (tmp);
}

int	main(void)
{
	int	fd = open("text.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	// char	msg[100];
	// char	buf[sizeof(msg)];

	// // printf("fd: %i\n", fd);
	// // write(fd, msg, sizeof(msg) - 1);
	// // close(fd);
	
	// fd = open("test.txt", O_RDWR);
	// // printf("fd: %i\n", fd);
	// read(fd, buf, sizeof(msg) - 1);
	// printf("%s\n", buf);
}

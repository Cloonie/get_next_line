/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:52:03 by mliew             #+#    #+#             */
/*   Updated: 2022/07/04 23:28:57 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	buf[100];

	read(fd, buf, 5);
	return (buf);
}

int	main(void)
{
	int	fd = open("test.txt", O_RDONLY);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:52:03 by mliew             #+#    #+#             */
/*   Updated: 2022/07/04 18:01:18 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{

}

int	main(void)
{
	int		fd[3];
	char	*buf1;

	fd[0] = open("test.txt", O_RDWR);
	fd[1] = open("test2.txt", O_RDONLY);

	buf1 = "hello";
	printf("fd0: %i fd1: %i\n", fd[0], fd[1]);
	close(fd[1]);
	fd[2] = open("test3.txt", O_RDONLY);
	printf("fd2: %i\n", fd[2]);
	write(fd[0], buf1, 6);
	write(1, buf1, 6);
	close(fd[0]);
	read(1, buf1, 10)
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:52:03 by mliew             #+#    #+#             */
/*   Updated: 2022/07/07 23:03:10 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE];
	char	**res;
	int		r;
	int		i;

	if (fd < 0)
		return(NULL);
	while ((r = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		i = 0;
		res[i] = "";
		if (ft_strchr(buf, '\n'))
		{
			res[i] = ft_strjoin(res[i], ft_strchr(buf, '\n'));
			res[i] = ft_strjoin(res[i], "\0");
		}
		else
			res[i] = ft_strjoin(res[i], buf);
		i++;
	}
	return (*res);
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

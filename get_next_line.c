/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:52:03 by mliew             #+#    #+#             */
/*   Updated: 2022/07/08 17:55:46 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE];
	static char	*stash;
	char		*line;
	int			r;

	stash = "";
	while ((r = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		stash = ft_strjoin(stash, buf);
		if (ft_strchr(stash, '\n'))
		{
			line = ft_substr(stash, 0, ft_nlstrlen(stash));
		}
	}
	return (line);
}

int	main(void)
{
	int	fd = open("text.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:52:03 by mliew             #+#    #+#             */
/*   Updated: 2022/07/09 15:11:52 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buf[BUFFER_SIZE];
	static char	*stash;
	char		**line;
	int			num;
	static	int count;

	stash = "";
	while ((num = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		stash = ft_strjoin(stash, buf);
		if (check_char(stash, '\n'))
		{
			line[count] = ft_substr(stash, 0, ft_strlen(stash, '\n'));
			// stash = ft_substr(stash, ft_strlen(stash, '\n') + 1, ft_strlen(stash, '\n'));
		}
	}
	printf("num: %d\n\nbuf: %s\n\nstash: %s\n\nline: %s\n\n",num,buf,stash,line);
	return (line[count]);
	count++;
}

int	main(void)
{
	int	fd = open("text.txt", O_RDONLY);
	printf("RETURN: %s\n", get_next_line(fd));
}

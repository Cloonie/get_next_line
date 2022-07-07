# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 11:34:24 by mliew             #+#    #+#              #
#    Updated: 2022/07/07 21:29:27 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I get_next_line.h -D BUFFER_SIZE=3
NAME	=	get_next_line.c
SRCS	=	get_next_line_utils.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME)
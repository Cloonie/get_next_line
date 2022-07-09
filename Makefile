# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 11:34:24 by mliew             #+#    #+#              #
#    Updated: 2022/07/09 13:34:21 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	=	-I get_next_line.h -D BUFFER_SIZE=3 #-Wall -Werror -Wextra
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
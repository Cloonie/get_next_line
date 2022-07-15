# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 11:34:24 by mliew             #+#    #+#              #
#    Updated: 2022/07/12 18:50:52 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I ./ -D BUFFER_SIZE=7
NAME		=	get_next_line.c
SRCS		=	get_next_line_utils.c

BONUSNAME	=	get_next_line_bonus.c
BONUSSRCS	=	get_next_line_utils_bonus.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(SRCS) && ./a.out

bonus:
	$(CC) $(CFLAGS) $(BONUSNAME) $(BONUSSRCS) && ./a.out

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME)
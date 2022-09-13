# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yona <yona@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 00:09:40 by yona              #+#    #+#              #
#    Updated: 2022/09/11 16:32:56 by yona             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRCS = 	atoi.c\
		cmpvalue.c\
		mem.c\
		str.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)
clean :
	rm -f $(OBJS)
fclean :
	rm -f $(NAME) $(OBJS)
re :
	make fclean
	make all

$(NAME) : $(OBJS)
	ar crs $@ $^
%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY : all clean fclean re
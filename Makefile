# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeonhkim <yeonhkim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 04:10:17 by yona              #+#    #+#              #
#    Updated: 2022/09/12 15:02:27 by yeonhkim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILE =  printf\
		f_info\
		out\
		put_txt\
		put_num\
		fmt_itoa\
		fmt_lst
ifdef BONUS
	PREFIX = ./bonus/
	SUFFIX = _bonus
else
	PREFIX = ./mandatory/
endif
SRCS = $(addprefix $(PREFIX), $(addsuffix $(SUFFIX).c, $(FILE)))
OBJS = $(SRCS:.c=.o)
LIBDIR = ./libft

all : $(NAME)
rm_obj :
	rm -f $(OBJS)
clean :
	make rm_obj
	BONUS=1 make rm_obj
	make clean -C $(LIBDIR)
fclean :
	rm -f $(NAME) 
	make clean
	make fclean -C $(LIBDIR)
re : 
	make fclean
	make all
bonus :
	BONUS=1 make all



$(NAME) : $(OBJS)
	make all -C $(LIBDIR)
	cp $(LIBDIR)/libft.a ./$@
	ar crs $@ $^

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@ -I$(LIBDIR)

.PHONY : all clean fclean re bonus re_obj
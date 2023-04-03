# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <event@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 13:54:58 by event             #+#    #+#              #
#    Updated: 2023/03/28 16:29:50 by event            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  megaphone

CC = c++ 

CFLAGS = -Wall -Werror -Wextra -std=c++98 -o

FILES = megaphone.cpp

OBJS = $(FILES:.cpp=.o)


$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(NAME) $(OBJS)
		@echo "Object + Executable created"


all : $(NAME)

clean : 

	rm -rf $(OBJS)


fclean : clean
		rm -rf $(NAME)


re : fclean all

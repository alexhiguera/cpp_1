# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 11:12:46 by alex              #+#    #+#              #
#    Updated: 2024/10/03 12:01:48 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#████████████████████████████ Configuration ███████████████████████████████████#

NAME    	:= megaphone
CC      	:= g++
CPPFLAGS  	:= -std=c++98
CFLAGS  	:= -Wall -Werror -Wextra

#█████████████████████████████ SOURCES █████████████████████████████████████████#

SRC			=		megaohone.cpp

OBJ			=		$(SRC:.cpp=.o)
#████████████████████████████ Rules ████████████████████████████████████████████#
all:		$(NAME)


$(NAME):	$(OBJ)
				@$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
				@$(CC) $(CXXFLAGS) -c $< -o $@


clean:
				@rm -f $(OBJ)

fclean: 	clean
				@rm -f $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re

#█████████████████████████████ Custom rules ████████████████████████████████████#

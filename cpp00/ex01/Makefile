# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: columbux <columbux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 13:01:48 by alex              #+#    #+#              #
#    Updated: 2025/05/20 00:57:33 by columbux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#████████████████████████████ Configuration ███████████████████████████████████#

NAME    	:= phonebook
CC      	:= g++
CPPFLAGS  	:= -std=c++98
CFLAGS  	:= -Wall -Werror -Wextra

#█████████████████████████████ SOURCES █████████████████████████████████████████#

SRC			=		ponebook.cpp contact.cpp main.cpp

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

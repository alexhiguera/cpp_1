# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: columbux <columbux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 11:12:46 by alex              #+#    #+#              #
#    Updated: 2025/05/22 14:46:06 by columbux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#████████████████████████████ Configuration ███████████████████████████████████#

NAME    	:= megaphone
CC      	:= g++
CPPFLAGS  	:= -std=c++98
CFLAGS  	:= -Wall -Werror -Wextra

#██████████████████████████████ Colors ████████████████████████████████████████#
DEF_COLOR 		=	\033[0;39m
GRAY 			=	\033[0;90m
RED 			=	\033[0;91m
GREEN 			=	\033[0;92m
YELLOW 			=	\033[0;93m
BLUE 			=	\033[0;94m
MAGENTA 		=	\033[0;95m
CYAN 			=	\033[0;96m
WHITE 			=	\033[0;97m

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

run:		fclean
			@echo "$(GREEN)Runing $(NAME)! 🚀$(WHITE)\n"
			@make re
			@./$(NAME) Columpio
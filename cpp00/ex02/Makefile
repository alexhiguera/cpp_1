# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahiguera <ahiguera@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 10:18:25 by ahiguera          #+#    #+#              #
#    Updated: 2025/05/23 17:23:44 by ahiguera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#████████████████████████████ Configuration ███████████████████████████████████#

NAME    	:= acount
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

SRC			=		Acount.cpp tests.cpp

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
			@./$(NAME)
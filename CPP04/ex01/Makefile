# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 00:07:35 by mcarecho          #+#    #+#              #
#    Updated: 2024/01/09 16:03:10 by mcarecho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism
SRC  = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

SOURCES_DIR = ./

OBJ_DIR = obj

SOURCES = $(addprefix $(SOURCES_DIR)/,$(SRC))

OBJS = $(SOURCES:$(SOURCES_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(OBJ_DIR)/%.o: $(SOURCES_DIR)/%.cpp
			   @$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
		 @$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		 @echo "\033[32;1m Compiled successfully \033[0m"

$(OBJ_DIR):
		 @mkdir -p $(OBJ_DIR)

clean:
		 @rm -rf $(OBJ_DIR)

fclean: clean
		 @rm -rf $(NAME)

re: 	fclean all

.PHONY: all clean fclean re

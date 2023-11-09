# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 22:52:29 by mcarecho          #+#    #+#              #
#    Updated: 2023/10/22 22:53:59 by mcarecho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moarBrainz
SRC  = main.cpp Zombie.cpp zombieHorde.cpp

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
		 @echo "\033[31;1m* 🧟🧟  OMG, is there more than one? 🧟🧟  \033[0m"

$(OBJ_DIR):
		 @mkdir -p $(OBJ_DIR)

clean:
		 @rm -rf $(OBJ_DIR)

fclean: clean
		 @rm -rf $(NAME)

re: 	fclean all

.PHONY: all clean fclean re

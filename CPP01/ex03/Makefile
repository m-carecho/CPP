# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 11:42:05 by mcarecho          #+#    #+#              #
#    Updated: 2023/10/23 12:01:12 by mcarecho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
SRC  = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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
		 @echo "\x1b[35mPra que tanta violência rapaz\x1b[0m"

$(OBJ_DIR):
		 @mkdir -p $(OBJ_DIR)

clean:
		 @rm -rf $(OBJ_DIR)

fclean: clean
		 @rm -rf $(NAME)

re: 	fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 12:24:17 by mcarecho          #+#    #+#              #
#    Updated: 2023/10/28 02:21:45 by mcarecho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fileTextReplacer
SRC  = main.cpp FileTextReplacer.cpp

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
		 @echo "\x1b[35mFile replace is ready\x1b[0m"

$(OBJ_DIR):
		 @mkdir -p $(OBJ_DIR)

clean:
		 @rm -rf $(OBJ_DIR)

fclean: clean
		 @rm -rf $(NAME)

re: 	fclean all

test:		all
			./tests/test.sh

.PHONY: all clean fclean re

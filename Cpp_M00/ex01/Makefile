# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 17:20:58 by gabdoush          #+#    #+#              #
#    Updated: 2022/10/04 14:36:20 by gabdoush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FILES = main.cpp\
		Contact.cpp\
		PhoneBook.cpp

OBJ = $(FILES:.cpp=.o)

FLAGS = -g -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
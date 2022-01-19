

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomatsu <tkomatsu@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/19 22:09:18 by tkomatsu          #+#    #+#              #
#    Updated: 2021/05/21 16:11:16 by tkomatsu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -O2
INCLUDE = -I includes
LIBS = ar -rc

all: $(NAME)

clean:
	@rm -rf $(OBJ_DIR)

fclean:
	@rm -rf $(NAME) $(OBJ_DIR)

re: fclean $(NAME)

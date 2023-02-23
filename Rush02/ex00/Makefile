# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danserra <danserra@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 15:36:20 by danserra          #+#    #+#              #
#    Updated: 2023/02/18 15:39:59 by danserra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DICT=numeros.dict
NAME=rush-02

$(NAME):
	@cc -Wall -Wextra -Werror main.c functions/*.c -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
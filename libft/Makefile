# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/12 20:59:21 by amarcele          #+#    #+#              #
#    Updated: 2020/05/14 20:15:50 by amarcele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c

NAME = libft.a
all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc libft.a *.o
	ranlib libft.a

so: $(NAME)
	gcc -L *.o  -shared -o libft.so -Wall -Wextra -Werror
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f libft.a

re: fclean all

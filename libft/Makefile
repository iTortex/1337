# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarcele <amarcele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/12 20:59:21 by amarcele          #+#    #+#              #
#    Updated: 2020/05/17 21:17:48 by amarcele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c

NAME = libft.a
all: $(NAME)

$(NAME):
	gcc -c -fPIC -Wall -Wextra -Werror $(SRC)
	ar rc libft.a *.o
	ranlib libft.a

so: $(NAME)
	gcc -L *.o -fPIC -shared -o libft.so -Wall -Wextra -Werror
	
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f libft.a

re: fclean all

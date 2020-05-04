SRC = *.c

all: libft

libft:
	gcc -c $(SRC)
	ar rc libft.a *.o
	ranlib libft.a
clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f *.o
	/bin/rm -f libft.a

re: fclean all

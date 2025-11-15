
CFLAGS = -Wall -Wextra -Werror -Iinclude

all: final

final: main.o libft.o
	gcc $(CFLAGS) main.o libft.o -o final

main.o: main.c
	gcc $(CFLAGS) -c main.c


libft.o: libft.c
	gcc $(CFLAGS) -c libft.c


clean:
	rm -r final main.o libft.o


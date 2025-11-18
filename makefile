
CFLAGS = -Wall -Wextra -Werror -Iinclude

all: final

final: main.o libft.o
	gcc $(CFLAGS)  libft.o main.o  -o final

main.o: main.c
	gcc $(CFLAGS) -c main.c

libft.o: libft.c
	gcc $(CFLAGS) -c libft.c


clean:
	rm -r main.o libft.o 


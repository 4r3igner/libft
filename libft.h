#ifndef MYLIB_H
#define MYLIB_H

#include <unistd.h>   /* allowed by your constraint */

/* public API */

/* return length of a NUL-terminated string */
size_t my_strlen(const char *s);

int ft_isalpha(unsigned char s);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isacii(int c);

int ft_isprint(unsigned c);

int ft_strlen(const char *s);

void *ft_memset(void* s, int c, int n);

void *ft_bzero(void* s, int n);

void* ft_memcpy(void* dest, void* s, int n);

void* ft_memmove(void* dest, void* s, int n);
#endif /* MYLIB_H */


#ifndef MYLIB_H
#define MYLIB_H

#include <unistd.h> /* allowed by your constraint */

#include <stdlib.h>

/* public API */

/* return length of a NUL-terminated string */
size_t my_strlen(const char *s);

int ft_isalpha(unsigned char s);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isacii(int c);

int ft_isprint(unsigned c);

size_t ft_strlen(const char *s);

void *ft_memset(void* s, int c, int n);

void *ft_bzero(void* s, int n);

void* ft_memcpy(void* dest, void* s, int n);

void* ft_memmove(void* dest, void* s, int n);

int ft_strlcpy(void*dest, void* src, int n);

int ft_strlcat(void* dest, void* src, int n);

int ft_toupper(int c);

int ft_tolower(int c);

void* ft_strchr(void* src, char c);

void* ft_strrchr(void* src, char c);

int ft_strncmp(void* src_1, void*src_2, int n);

void* ft_memchr(void* src, int byte, int n);

int ft_memcmp(void* dest, void *src, int n);

char* ft_strnstr(char* src, char* word, int n);

int ft_atoi(char* src);

void* ft_calloc(size_t n_elements, size_t size);

char* ft_strdup(const char* s);

//-----------------------------------------------------------
//			----PART 2----	
//-----------------------------------------------------------

char* ft_substr(char const* s, unsigned int n, size_t len);

char* ft_strjoin(char const* s1, char const* s2);

char* ft_strtrim(char const *s1, char const* set);

char** ft_split(char const* s, char c);

char* ft_itoa(int n);

#endif /* MYLIB_H */


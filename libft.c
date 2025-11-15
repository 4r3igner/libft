#include "libft.h"  /* relative path; Makefile can also add -Iinclude */

size_t my_strlen(const char *s) {
    size_t n = 0;
    while (s && s[n]) n++;
    return n;
}

int ft_isalpha(unsigned char s) {
	
	if ((s>=65 && s<= 90) || (s>=97 && s<=122))
		return 1;
	else
		return 0;
			
}

int ft_isdigit(int c){
	if (c >= 48 && c <= 57)
		return 1;
	else
		return 0;
}

int ft_isalnum(int c){
	int n = ft_isdigit(c);
	int character  = ft_isalpha(c);
	if ((n || character) == 1)
		return 1;
	else
		return 0;
}

int ft_isacii(int c){
	if ((c >= 0) && (c <= 127))
		return 1;
	else
		return 0;
}

int ft_isprint(unsigned c){
	if ((c >= 32) && (c <= 126))
		return 1;
	else
		return 0;
}

int ft_strlen(const char *s){
	int n = 0;
	while(s[n])
		n++;
	return n;
}

void* ft_memset(void* s, int c, int n){
	char* ss  = (char*) s;
	int pos = 0;
	while(pos < n ){
		ss[pos]  = (char) c;
		pos++;
	}
	return s;
}

void* ft_bzero(void* s, int n){
	char* ss = (char*)s;
	int pos = 0;
	while (pos < n){
		ss[pos] = '\0';
		pos++;
	}
	return s;
}

void* ft_memcpy(void* dest, void* s, int n){
	char* ss = (char*) s;
	char* d_dest = (char*) dest;
	int pos = 0;
	while (pos < n){
		d_dest[pos] = ss[pos];
		pos++;
	}
	return dest;
}

void* ft_memmove(void* dest, void* src, int n){
	char* d = (char*) dest;
	char *s = (char*) src;
	if (dest > src && dest < src + n){
		while (n!=0){
			d[n-1] = s[n-1];
			n--;
		}	
	}
	else{
		int i = 0;
		while (i < n){
			d[i] = s[i];
			i++;
		}
	}

	return dest;
}

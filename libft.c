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

int  ft_strlcpy(void*dest, void* src, int n){
	int i = 0;
	char* d = (char*) dest;
	char* s = (char*) src;
	while (s[i]){
		i++;
	}
	int j = 0;
	if (i >= n){
		while (n > 1){
			d[j] = s[j];
			j++;
			n--;
		}
	}
	else{
		while(j!=i){
			d[j] = s[j];
			j++;
		}
	}
	d[j] = '\0';

	return i;
}

int ft_strlcat(void* dest, void* src, int n){
	int ldest=0,lsrc=0;
	char* d = (char*) dest;
	char* s = (char*) src;
	while (d[ldest])
		ldest++;
	while (s[lsrc])
		lsrc++;
	int j = 0;
	int i = n - ldest ;
	if ((ldest + lsrc) >= n){
		while (j < i-1){
			d[ldest] = s[j];
			j++;
			ldest++;
		}
	}
	else{ //(ldest + lsrc) <= n
		if (lsrc < i){
			while (j < lsrc){
				d[ldest] = s[j];
				j++;
				ldest++;
			}
		}
		else if (lsrc >= i){
			while (j < i){
				d[ldest] = s[j];
				j++;
				ldest++;
			}
		}
			
		}
	
	d[ldest] = '\0';

	return ldest + lsrc;
}


int ft_toupper(int c){
	if (c >= 97 && c <= 122)
		c -= 32;
	
	return c;
}

int ft_tolower(int c){
	if (c >= 65 && c <= 90)
		c += 32;
	return c;
}

void* ft_strchr(void* src, char c){
	char* s = (char*) src;
	int i = 0;
	while (s[i]!=c && s[i] != '\0'){
		i++;
	}
	if (s[i] == c)
		return s + i;
	else
		return NULL;
	
}

void* ft_strrchr(void* src, char c){
	char* s = (char*) src;
	int i = 0;
	int j = 0;
	while(s[i]!='\0'){
		if (s[i] == c){
			j *= 0;
			j += i;
		}
		i++;
	}
	if (s[j] == c)
		return s + j;
	else
		return NULL;
}

int ft_strncmp(void* src_1, void* src_2, int n){
	char* s_1 = (char*) src_1;
	char* s_2 = (char*) src_2;
	int i = 0;
	while ((s_1[i]==s_2[i]) && ((s_1[i] && s_2[i])!= '\0') && n!=0){
		i++;
		n--;
	}
	
	return s_1[i] - s_2[i];
}

void* ft_memchr(void* src, int byte, int n){
	unsigned char* s = (unsigned char*) src;
	unsigned char b = (unsigned char) byte;
	int i = 0;
	while (i < n){
		if (s[i] == b)
			return s + i;
		i++;
	
	if (s[i]!=b)
		return NULL;
}

int ft_memcmp(void* dest, void*src, int n){
	unsigned char* d = (unsigned char*) dest;
	unsigned char* s = (unsigned char*) src;
	int i = 0;
	while (i<n){
		if (d[i] == s[i])
			i++;
		else
			return d[i] - s[i];
	}
	return 0;
}


char* ft_strnstr(char* src, char* word, int n) {
    int len = 0;
    while (word[len])
        len++;

    if (len == 0)
        return src;

    int i = 0;
    int j = 0;

    while (i < n) {
        if (src[i] == word[j]) {
            j++;
            if (j == len)
                return src + (i - len + 1);
        } else {
            i -= j;   // backtrack to the position after the first matched char
            j = 0;
        }
        i++;
    }

    return NULL;
}

int ft_atoi(char* src){
	int i = 0;
	int j = 1;
	int z = 1;
	int num = 0;
	int sign = 0;
	while (j!= 0){
		if (src[i] == 45){
			sign++;
		}
		if ( z == 0)
			j = 0;
		while (src[i] >= 48 && src[i] <= 57){
			num = num*10 + src[i] - 48;
			i++;
			z = 0;
		}
		i++;

	}
	if (sign % 2 != 0)
		return -num;
	else
		return num;
}

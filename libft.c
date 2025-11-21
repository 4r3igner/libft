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

size_t ft_strlen(const char *s){
	size_t n = 0;
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
	}	
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


void* ft_calloc(size_t n_elements, size_t size){
	void* ptr;
	
	size_t MAX = (size_t) - 1;

	if (n_elements == 0 || size == 0)
		return malloc(0);
	
	if (n_elements > (MAX/size))
			return NULL;
	

	size_t total = n_elements * size;

	ptr = malloc(total);
	
	ft_memset(ptr,0,total);

	return ptr;
}

char* ft_strdup(const char* s){
	size_t len = ft_strlen(s) + 1;

	char* new_s = (char*) ft_calloc(len,sizeof(char));
	if (new_s == NULL)
		return NULL;

	size_t i  = 0;
	while (i < len){
		new_s[i] = s[i];
		i++;
	}
	return new_s;
}

//--------------------------------------------------------------------------
//     			------	PART 2	------------
//-------------------------------------------------------------------------



char* ft_substr(char const* s, unsigned int n, size_t len){
	size_t i;
	char* new_s;
	size_t actual_len;

	if (n >=(unsigned int) ft_strlen(s)){
		new_s  = (char*)malloc(1);
		if (new_s == NULL)
			return NULL;
		new_s[0] = '\0';
	}

	actual_len = ft_strlen(s) - n;
	if (actual_len > n)
		actual_len = len;
	
	new_s = (char*)malloc(actual_len+1);
	if (new_s == NULL)
		return NULL;

	i = 0;
	while(i<actual_len){
		new_s[i] = s[n+i];
		i++;
	}

	new_s[i] = '\0';
	return new_s;
}

char* ft_strjoin(char const* s1, char const* s2){
	size_t l_s1 = ft_strlen(s1);
	size_t l_s2 = ft_strlen(s2);
	size_t len = l_s1 + l_s2;
	char* new_s;

	if(len == 0){
		new_s = (char*)malloc(1);
		new_s[0] = '\0';
		return new_s;
	}
	
	new_s = (char*)malloc(len);

	size_t i = 0;
	size_t j = 0;
	while (i+j < len){
		if (i < l_s1){
			new_s[i] = s1[i];
			i++;
		}
		if (j < l_s2){
			new_s[l_s1 + j] = s2[j];
			j++;
		}
	}
	new_s[len] = '\0';
	return new_s;
	
	
}

char* ft_strtrim(char const* s1, char const* set){
    size_t i = 0;
    size_t j = 0;
    char* s;

    size_t len_s = ft_strlen(s1);
    size_t len_set = ft_strlen(set);

    s = (char*)malloc(len_s*sizeof(char));

    if (s == NULL)
	    return NULL;

    int found = 0;
    size_t t = 0;
    size_t len_found = 0;

    while (i < len_s){
        while (j < len_set){
            if (s1[i] == set[j]){
                len_found++;
                found = 1;
                j = len_set;
            }
            else
                j++;
        }
        j = 0;
        if (found != 1){
            s[t] = s1[i];
            t++;
        }
        found = 0;
        i++;
    }
    
    i = 0;
    j = 0;
    size_t len_final = len_s - len_found  ;
    char* final_s = (char*)malloc(len_final + 1);
	
    if (final_s == NULL)
	    return NULL;
    
    while (i < len_final){
      final_s[i] = s[i];
      i++;
    }
    final_s[i] = '\0';
    
    return final_s;
} 

char** ft_split(char const* s, char c){
	size_t OG_len = ft_strlen(s);
	size_t i = 0;
	size_t j = 0;
	size_t n_arr = 0;
	size_t n
}

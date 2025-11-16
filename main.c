#include "libft.h"
#include <stdio.h>

int main(void) {
    int n  = my_strlen("Hello");
    printf("Lenght of the string is %d\n",n);

//checks isalpha()
    int alpha = ft_isalpha('a');
    if (alpha == 1)
	    printf("the introduces character is a part an alphabet character\n");
    else
	    printf("This character is not a alphabetic value\n");

//checks if the isdigit()
    int num = ft_isdigit('9');
    if (num == 1)
	    printf("it's a digit\n");
    else
	    printf("is not a digit\n");

//checks isalnum
    int ch = ft_isalnum(66);
    if (ch == 1)
	    printf("That's a letter or a digit\n");
    else
	    printf("That's not a letter nor a digit\n");

    //checks isacii()
    int ascii  = ft_isacii(128);
    if (ascii == 1)
	    printf("That's an ASCII character\n");
    else
	    printf("That's not an ASCII character\n");

    //checks isprint()
    int print = ft_isprint('~');
    if (print == 1)
	    printf("That's a printable character\n");
    else
	    printf("That's not a printable character\n");

    //checks strlen()
    int len = ft_strlen("Buna ziua\n");
    printf("Length of the string is %d\n",len);

    //check memset()
    char  arr[10] = "Buna Ziua";
    ft_memset(arr,'A',4);
    printf("%s\n",arr);
	
    //check bzero()
    ft_bzero(arr,4);
    printf("bzero()---\t%s\n",arr);

    //check memcpy()
    char a_arr[10] = "Trofim";
    char arr_2[10];
    ft_memcpy(arr_2,a_arr,4);
    printf("%s\n",arr_2);

    //check memmove()
    char mem [] = "ABCDe";
    ft_memmove(mem+2,mem,3);
    printf("memmove()---\t%s\n",mem);

    //check strlcpy()
    char a[10] = "HelloMama";
    char b[4];
    ft_strlcpy(b,a,4);
    printf("strlcpy()\t%s\n",b);

    //check strlcat()
    char c[] = "Hellogigi";
    char d[50] = "Mama ";
    ft_strlcat(d,c,50);
    printf("strlcat()\t%s\n",d);

    //check toupper()
    printf("%c\n",ft_toupper('B'));

    //check tolower()
    printf("%c\n",ft_tolower('Z'));

    //check strchr()
    char* result_1 =  ft_strchr(d,'g');
    printf("%s\n",result_1);

    //check strrchr()
    char* result_2 = ft_strrchr(d,'g');
    printf("strrchr()\t%s\n",result_2);

    //check strncmp()
    char z[] = "Hello";
    printf("strncmp()\t%d\n",ft_strncmp(c,z,2));

    //check memchr()
    buffer = {'T','r',0,'f',1,'m'};
    printf("memchr()\t%s\n",ft_memchr(buffer,102,10));

	


    return 0;




}


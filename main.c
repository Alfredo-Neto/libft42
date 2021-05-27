#include <stdio.h>
#include <string.h>
#include "libft.h"

// void printArray(char *arr, int n)
// {
//     int i = 0;
//     while (i < n)
//     {
//         printf("%c", arr[i]);
//         i++;
//     }
//     printf("\n");
// }

// void ft_test(char *str)
// {
//     int size;
//     int ft_size;

//     size = strlen(str);
//     ft_size = ft_strlen(str);

//     if (size != ft_size)
//         printf("> KO, return value does not match the original function. Expected: %d. Got: %d instead\n", size, ft_size);
//     else
//         printf("> OK. Result: %d\n", ft_size);
// }

int main(void)
{
    // char arr[] = "Start Stop"; 
    // char dest[] = "HELLO";

    // Dest:    [-]
    // Source:    [-] 

    // printArray(arr, 4);
    // printf("Memset is: \n");
    // ft_memset(arr,'3', sizeof(arr));
    // printArray(arr, 4);

    // printArray(arr, 4);
    // printf("bzero is: \n");
    // ft_bzero(arr, sizeof(arr));
    // printArray(arr, 4);

    // printArray(arr, sizeof(arr));
    // printf("memcpy is: \n");
    // ft_memcpy(arr, arr + 2 , 3 * sizeof(char));
    // printArray(arr, sizeof(arr));

    // printf("Original is: \n");
    // printArray(dest, sizeof(dest));
    // printf("memccpy is: \n");
    // ft_memccpy(dest, src , ':', sizeof(dest));
    // printArray(dest, sizeof(dest));

    // printArray(arr, sizeof(arr));
    // printf("memmove is: \n");
    // ft_memmove(arr, arr + 2 , 3 * sizeof(char));
    // printArray(arr, sizeof(arr));

    // const char str [] = "http://www.tutorialspoint.com";
    // const char ch = '?';
    // char *ret;

    // ret = ft_memchr(str, ch, strlen(str));

    // printf("String after %c is : %s\n", ch, ret);

    // char *s1 = calloc(10, sizeof(char));
    // char *s2 = calloc(8, sizeof(char));

    // s1 = "abcdefghi";
    // s2 = "abcdefg";

    // printf("s1: %s, s2: %s\n", s1, s2);
    // printf("My function: %d\nOriginal function: %d\n", ft_memcmp(s1, s2, 10 * sizeof(char)), memcmp(s1, s2, 10 * sizeof(char)));


    // char *str;

    // str = "Jorge é fera";
    // ft_strlen_test(str);
    // str = "Alexandre é fera";
    // ft_strlen_test(str);
    // str = "";
    // ft_strlen_test(str);
    // str = "testing more and more and more and more and more and more and more";
    // ft_strlen_test(str);

    // char *dst = calloc(40, sizeof(char));
    // char *src = calloc(10, sizeof(char));

    //     src = "Alfredo";
    //     int ft_result = ft_strlcpy(dst, src, sizeof(dst));
    //     int result = strlcpy(dst, src, sizeof(dst));
    //     printf("ft_result: %d, result: %d\n", ft_result, result); // 7/40

        // char *dst = calloc(10, sizeof(char));
        // char *src = calloc(20, sizeof(char));
        // size_t size = 31;
        // char *buffer = calloc(size, sizeof(char));
 
        // src = "42 is awesome, bro!!"; // 20
        // dst = "Alfredo!!!"; // 10

        // strcpy(buffer, dst);
        // // size_t result = strlcat(buffer, src, size);
        // size_t ft_result = ft_strlcat(buffer, src, 31);
        // printf("dst size: %li\n", ft_strlen(dst));
        // printf("src size: %li\n\n", ft_strlen(src));

        // // printf("result size: %li\n\n", result);
        // printf("ft_result size: %li\n\n", ft_result);

        // puts(buffer);
        // if( ft_result >= size )
        //     puts("String truncated\n");
        
        // else
        //     puts("String was fully copied\n");

        // char s[] = "abcdefghij";
        
        // size_t i;
        // unsigned char   *c;

        // i = 0;
        // while (i < ft_strlen(s) + 1)
        // {
        //     c = (unsigned char *)ft_strrchr(s, s[i]);
        //     printf("%s\n", c);
        //     i++;
        // }

        // char s[] = "abcdefghij";
        // size_t i;

        // i = 0;
        // while (i < ft_strlen(s))
        // {
        //     char *ft_result = ft_strrchr(s, s[i]);
        //     char *result = strrchr(s, s[i]);
        //     printf("%s, %s\n", ft_result, result);
        //     i++;
        // }
        
        // char *str = strcpy(calloc(11, sizeof(char)), "alo galera");
        // char *to_find = strcpy(calloc(7, sizeof(char)), "gale");

        // char *ft_buffer = ft_strnstr(str, to_find, sizeof(to_find));
        // char *buffer = strnstr(str, to_find, sizeof(to_find));

        // if (buffer != ft_buffer)
        //     printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buffer, ft_buffer);
        // else
		// 	printf("[1] OK. expected: %s result: %s\n", buffer, ft_buffer);

    return (0);
}        
#include <stdio.h>
#include <string.h>
#include "libft.h"

void printArray(char *arr, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
}

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

    char *s1 = calloc(10, sizeof(char));
    char *s2 = calloc(8, sizeof(char));

    s1 = "abcdefghi";
    s2 = "abcdefg";

    printf("s1: %s, s2: %s\n", s1, s2);
    printf("Difference between s1 and s2: %d\n", ft_memcmp(s1, s2, 10 * sizeof(char)));

    return (0);
}

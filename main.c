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
    char arr[] = "Start Stopta"; // artrt Stop

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

    // printArray(arr, 4);
    // printf("memccpy is: \n");artrt Stop

    printArray(arr, sizeof(arr));
    printf("memmove is: \n");
    ft_memmove(arr, arr + 2 , 3 * sizeof(char));
    printArray(arr, sizeof(arr));

    return (0);
}

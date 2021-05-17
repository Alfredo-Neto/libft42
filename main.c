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
    char arr[] = "ABCD";
    printArray(arr, 4);
    ft_memset(arr,'3', sizeof(arr));
    printArray(arr, 4);
    return (0);
	}

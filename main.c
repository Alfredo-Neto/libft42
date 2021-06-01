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

void t_strlen(char *str)
{
    int size;
    int ft_size;

    size = strlen(str);
    ft_size = ft_strlen(str);

    if (size != ft_size)
        printf("> KO, return value does not match the original function. Expected: %d. Got: %d instead\n", size, ft_size);
    else
        printf("> OK. Result: %d\n", ft_size);
}

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

void	ft_print_isalpha(int n)
{
	if (n)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

void t_split()
{
    int i;

    i = 0;
    char **str1 = ft_split("42 is amazing, bro", 'a'); // separador
    while (str1[i] != NULL)
        {
            ft_print_result(str1[i]);
            // write(1, ".", 1);
            i++;
        }
    write(1, "\n", 1);
}
    

void	ft_strncmp_test(char *s1, char *s2, unsigned int n)
{
	int res;
	int ft_res;

	res = strncmp(s1, s2, n);
	ft_res = ft_strncmp(s1, s2, n);
	if (res != ft_res)
		printf("> KO, expected: %d, got: %d\n", res, ft_res);
	else
		printf("> OK, result: %d\n", ft_res);
}

void t_strjoin() 
{

    char *s1;
    char *s2;
    char *join;

    s1 = ft_calloc(8, sizeof(char));
    s2 = ft_calloc(5, sizeof(char));

    s1 = "Alfredo";
    s2 = "Neto";

    join = (char *)ft_strjoin(s1, s2);
    printf("Joined strings be like: %s\n", join);
}


void t_strtrim()
{
    char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
        char s2[] = "lorem ipsum dolor sit amet";
        char s3[] = " lorem ipsum dolor sit amet";
        char s4[] = "lorem ipsum dolor sit amet";
        char s5[] = "          ";
        char s6[] = "abacbbababccabacbaLinuxabbcbababcbabbabcbc";
        char s7[] = "abcde";
        printf("ft_strtrim 1 : %s\n", ft_strtrim(s1, " "));
        printf("ft_strtrim 2 : %s\n", ft_strtrim(s2, "te"));
        printf("ft_strtrim 3 : %s\n", ft_strtrim(s3, "l "));
        printf("ft_strtrim 4 : %s\n", ft_strtrim(s4, "tel"));
        printf("ft_strtrim 5 : %s\n", ft_strtrim(s5, " "));
        printf("ft_strtrim 6 : %s\n", ft_strtrim(s6, "abc"));
        printf("ft_strtrim 7 : %s\n", ft_strtrim(s7, "cd"));
}

void t_calloc()
{
        char *str1;
        char *ft_str2;

        str1 = calloc(8, sizeof(char));
        ft_str2 = ft_calloc(8, sizeof(char));
        str1 = "Alfredo";
        ft_str2 = "Alfredo";

        if (str1 != ft_str2)
          printf("[1] KO, strings don't match(expected:%s, got:%s)\n", str1, ft_str2);
        else
			printf("[1] OK. expected: %s result: %s\n", str1, ft_str2);
}

void t_substr()
{
        char *s;
        char *res;
        size_t len;
        size_t start;

		s = ft_calloc(13, sizeof(char));
        start = 0;
        s = "Alfredo Neto";
		len = ft_strlen(s);
		while (start < len)
		{
			res = (char *)ft_substr(s, start, len);
			printf("Substring is: %s\n", res);
			start++;
		}

        t_strjoin();

        char *str = calloc(11, sizeof(char)); 
        str = "42SaoPaulo";
        printf("ft_substr : %s\n", ft_substr(str, 4, sizeof(str)));
}

void t_isalpha()
{   
    int i;
    i = 0;
    while (i <= 47)
    {
        ft_print_isalpha(ft_isalpha(i));
        i++;
    }
}

void t_atoi()
{
        int val;
		char str[20];
		
		strcpy(str, "98993489");
		val = ft_atoi(str);
		printf("String value = %s, Int value = %d\n", str, val);

		strcpy(str, "tutorialspoint.com");
		val = ft_atoi(str);
		printf("String value = %s, Int value = %d\n", str, val);
}

void t_strcmp()
{
    char	*s1 = "abcdefghi";
        char	*s2 = "abcdEfghi";
        char	s3[] = {'a', 'b', -23, 'd', 'e', 'f', 'g', 'h', 'i', '\0'};
        int		offset;

        offset = 0;
        printf("[1] Testing strings \"%s\" and \"%s\"\n", s1, s2);
        while (offset < 10)
        {
            ft_strncmp_test(s1, s2, offset);
            offset++;
        }
		offset = 0;
		printf("[2] Testing strings \"%s\" and \"%s\"\n", s1, s3);
		while (offset < 10)
		{
			ft_strncmp_test(s1, s3, offset);
			offset++;
		}
		offset = 0;
		printf("[3] Testing strings \"%s\" and \"%s\"\n", s2, s3);
		while (offset < 10)
		{
			ft_strncmp_test(s2, s3, offset);
			offset++;
		}
}

void    t_strnstr()
{
    char *str = strcpy(calloc(11, sizeof(char)), "alo galera");
    char *to_find = strcpy(calloc(7, sizeof(char)), "gale");

    char *ft_buffer = ft_strnstr(str, to_find, sizeof(to_find));
    char *buffer = strnstr(str, to_find, sizeof(to_find));

    if (buffer != ft_buffer)
        printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buffer, ft_buffer);
    else
        printf("[1] OK. expected: %s result: %s\n", buffer, ft_buffer);
}

void    t_strrchr()
{
    char s[] = "abcdefghij";
    size_t i;
    unsigned char   *c;

    i = 0;
    while (i < ft_strlen(s))
    {
        char *ft_result = ft_strrchr(s, s[i]);
        char *result = strrchr(s, s[i]);
        printf("%s, %s\n", ft_result, result);
        i++;
    }
    i = 0;
    while (i < ft_strlen(s) + 1)
    {
        c = (unsigned char *)ft_strrchr(s, s[i]);
        printf("%s\n", c);
        i++;
    }
}

void    t_strlcat()
{
    char *dst = calloc(10, sizeof(char));
    char *src = calloc(20, sizeof(char));
    size_t size = 31;
    char *buffer = calloc(size, sizeof(char));

    src = "42 is awesome, bro!!"; // 20
    dst = "Alfredo!!!"; // 10

    strcpy(buffer, dst);
    // size_t result = strlcat(buffer, src, size);
    size_t ft_result = ft_strlcat(buffer, src, 31);
    printf("dst size: %li\n", ft_strlen(dst));
    printf("src size: %li\n\n", ft_strlen(src));

    // printf("result size: %li\n\n", result);
    printf("ft_result size: %li\n\n", ft_result);

    puts(buffer);
    if( ft_result >= size )
        puts("String truncated\n");
    
    else
        puts("String was fully copied\n");
}

void t_strlcpy()
{
    char *dst = calloc(40, sizeof(char));
    char *src = calloc(10, sizeof(char));

    src = "Alfredo";
    int ft_result = ft_strlcpy(dst, src, sizeof(dst));
    int result = strlcpy(dst, src, sizeof(dst));
    printf("ft_result: %d, result: %d\n", ft_result, result);
}

void t_memcmp()
{
    char *s1 = calloc(10, sizeof(char));
    char *s2 = calloc(8, sizeof(char));

    s1 = "abcdefghi";
    s2 = "abcdefg";

    printf("s1: %s, s2: %s\n", s1, s2);
    printf("My function: %d\nOriginal function: %d\n", ft_memcmp(s1, s2, 10 * sizeof(char)), memcmp(s1, s2, 10 * sizeof(char)));
}

void t_memchr()
{
    const char str [] = "42 is amazing bro";
    const char ch = '?';
    char *ret;

    ret = ft_memchr(str, ch, strlen(str));

    printf("String after %c is : %s\n", ch, ret);
}

void t_memmove()
{
    char arr[] = "Start Stop"; 

    printArray(arr, sizeof(arr));
    printf("memmove is: \n");
    ft_memmove(arr, arr + 2 , 3 * sizeof(char));
    printArray(arr, sizeof(arr));
}

void t_memccpy()
{
    char arr[] = "Start  Stop"; 
    char dest[] = "HELLO";

    printf("Original is: \n");
    printArray(dest, sizeof(dest));
    printf("memccpy is: \n");
    ft_memccpy(dest, arr,'a', sizeof(dest));
    printArray(dest, sizeof(dest));
}

void t_memcpy()
{
    char arr[] = "Start Stop"; 

    printArray(arr, sizeof(arr));
    printf("memcpy is: \n");
    ft_memcpy(arr, arr + 2 , 3 * sizeof(char));
    printArray(arr, sizeof(arr));
}

void t_bzero()
{
    char arr[] = "Start Stop"; 

    printArray(arr, 4);
    printf("bzero is: \n");
    ft_bzero(arr, sizeof(arr));
    printArray(arr, 4);
}

void t_memset()
{
    char arr[] = "Start Stop"; 

    printArray(arr, 4);
    printf("Memset is: \n");
    ft_memset(arr,'3', sizeof(arr));
    printArray(arr, 4);
}

int main(void)
{
    return (0);
}
#include "libft.h"

void function ft_super_free(void **ptr)
{
	if(*ptr)
	{
		free(ptr);
		ptr = NULL;
	}
}

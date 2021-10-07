#include "libft.h"

int ft_endswith(const char *str, const char *substr, char breakpoint, size_t n)
{
    char *end;

	if(!str)
		return (0);
	end = ft_strrchr(str, breakpoint);
	if (ft_strncmp(end, substr, n))
		return (0);
	return (1);
}

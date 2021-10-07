#include "libft.h"

void  ft_swap_pos (char *curr_pos, char *next_pos, char curr_val, char next_val)
{
    *curr_pos = next_val;
    *next_pos = curr_val;
}

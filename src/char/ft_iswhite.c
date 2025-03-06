#include "libft.h"

int ft_iswhite(int c)
{
	return ((c >= 9 && c <= 13) || (c == ' '));
}
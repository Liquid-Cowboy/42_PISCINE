#include "libft.h"

int	isdigit(unsigned char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

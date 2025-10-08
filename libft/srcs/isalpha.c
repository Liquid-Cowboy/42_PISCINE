#include "libft.h"

int	isalpha(unsigned char c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

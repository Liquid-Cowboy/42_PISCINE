#include "libft.h"
#include <stddef.h>

void	bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

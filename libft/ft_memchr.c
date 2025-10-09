#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t	i;

	i = 0;
	ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (*ptr == (const unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*mem1;
	const unsigned char	*mem2;
	size_t	i;

	i = 0;
	mem1 = (const unsigned char *)s1;
	mem2 = (const unsigned char *)s2;
	while (i < n && mem1[i] == mem2[i])
		i++;
	if (i == n)
		return (0);
	return (mem1[i] - mem2[i]);
}

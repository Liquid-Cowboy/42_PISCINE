#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strcpy(char *src);
int	ft_strlen(char *src);

char	*ft_strcpy(char *src)
{
	char	*dest;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	int	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *src)
{
	int	i = 0;
	while (src[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i = 0;
	t_stock_str *dest;
	dest = malloc (sizeof(t_stock_str) * (ac + 1));
	if (!dest)
		return (NULL);
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strcpy(av[i]);
		i++;

	}

		dest[i].size = 0;
		dest[i].str = NULL;
		dest[i].copy = NULL;
	return (dest);

}

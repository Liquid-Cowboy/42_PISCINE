#include "libft.h"

static
void	trim_ends(char const *s1, char const *set, char **tab, char **end)
{
	const char	*trim;

	trim = set;
	*tab = (char *)s1;
	while (*trim)
	{
		if (*trim == **tab)
		{
			trim = set;
			(*tab)++;
		}
		else
			trim++;
	}
	trim = set;
	*end = *tab + ft_strlen((char const *)*tab) - 1;
	while (*trim)
	{
		if (*trim == **end)
		{
			trim = set;
			(*end)--;
		}
		else
			trim++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end;
	char	*start;
	char	*tab;
	size_t	len;

	start = (char *)s1;
	end = (char *)s1;
	tab = (char *)s1;
	trim_ends(s1, set, &tab, &end);
	start = tab;
	if (end <= start)
		return (NULL);
	len = end - start + 1;
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, (const char *)start, (len + 1));
	return (tab);
}

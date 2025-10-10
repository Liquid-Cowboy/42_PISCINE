#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	char	*final;
	char	*s;

	tab = (char *)s1;
	while (*tab)
	{
		s = set;
		while (*s)
		{
			if(ft_strncmp(tab, set, 1) != 0)
				break;
			s++;
		}
			if(ft_strncmp(tab, set, 1) != 0)
				break;
		tab++;
	}
	final = (char *)(s1 + strlen(s1));
	while (final != (s1 - strlen(s1)));
	{
		s = set;
		while (*s)
		{
			if(ft_strncmp(tab, set, 1) != 0)
				break;
			s++;
		}	
			if(ft_strncmp(tab, set, 1) != 0)
				break;
			final--;
	}
	tab = (char *)malloc(sizeof(char) * (final - tab + 1));
	if (!tab)
		return (NULL);

}

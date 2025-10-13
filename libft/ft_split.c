#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ar;
	char	*start;
	char	*end;
	size_t	num;
	size_t	i;

	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] == c && (i != 0 && s[i - 1] != c && s[i + 1] != '\0'))
			num++;
		i++;
	}
	if (num != 0)
		num++;
	ar = (char **)malloc(sizeof(char *) * (num + 1));
	if (!ar)
		return (NULL);
	i = 0;
	start = (char *)s;
	while (i < num)
	{
		end = ft_strchr((char const *)start, c);
		if (end == NULL)
			end = (char *)(s + ft_strlen(s));
		ar[i] = malloc(sizeof(char) * (end - start + 1));
		if (!ar[i])
			return (NULL);
		ft_strlcpy(ar[i], start, (end - start + 1));
		start = end + 1;
		i++;
	}
	ar[i] = NULL;
	return (ar);
}

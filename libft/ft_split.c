#include "libft.h"

static
size_t	ft_count_wd(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 1;
	i = 0;
	while (s[i] == c)
	{
		i++;
	}
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count += 1;
		i++;
	}
	return (count);
}

static
char	**ft_ardup(char const *s, char c, size_t count, char **ar)
{
	char	*mark;
	char	*wd_start;
	size_t	i;
	
	i = 0;
	mark = (char *)s;
	while (*mark == (char)c)
		mark++;
	wd_start = mark;
	while (i < count && *mark)
	{
		while (*mark != (char)c && *mark)
			mark++;
		ar[i] = malloc (sizeof(char) * (mark - wd_start + 1));
		if (!ar[i])
			return (NULL);
		ft_strlcpy(ar[i], (const char *)wd_start, (mark - wd_start + 1));
		while (*mark == (char)c)
			mark++;
		if (*mark)
			wd_start = mark;
		i++;
	}
	ar[i] = NULL;
	return (ar);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**ar;

	count = ft_count_wd(s, c);
	if (count == 0)
		return (NULL);
	ar = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ar)
		return (NULL);
	ft_ardup(s, c, count, ar);
	return (ar);
}

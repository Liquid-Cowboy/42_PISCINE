#include "libft.h"

static
size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if(!s[i])
			break;
		count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static
char	*dup_and_alloc(char *str, char c)
{
	char	*end;

	end = ft_strchr(str, c);
	str = malloc(sizeof(char) * (end - str + 1));
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ar;
	size_t	count;
	size_t	i;
	char	*str;

	count = count_words(s, c);
	i = 0;
	str = (char *)s;
	ar = malloc(sizeof(char *) * (count + 1));
	if (!ar)
		return (NULL);
	while (i < count)
	{
		while (*str == c)
			str++;
		ar[i] = dup_and_alloc(str, c);
		str = ft_strchr((const char *)str, c);
		i++;
	}
	return (ar);
}

#include <stdio.h>
int	main(void)
{
	char	**ar;

	ar = ft_split("Hello world im here", ' ');
	printf("%zu", count_words("   hello   ", ' '));
	while (*ar)
	{
		printf("%s\n", *ar);
		ar++;
	}
	return (0);
}


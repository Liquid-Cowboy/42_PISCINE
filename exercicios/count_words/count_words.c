int count_words(char *str)
{
	int	is_word = 0;
	while (*str)
	{
		if (!((*str >= 9 && *str <= 13) || *str == ' '))
		{
			is_word += 1;
			while (*str && !((*str >= 9 && *str <= 13) || *str == ' '))
			str++;
		}
		else
			str++;
	}
	return (is_word);
}

#include <stdio.h>

int	main(void)
{
	char	*str = "Hello, my name is Giorgio.";

	printf("%d", count_words(str));
	return (0);
}

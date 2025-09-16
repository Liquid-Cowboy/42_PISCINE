#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		int	j = 0;
		int	is_palindrome = 1;

		while (argv[1][j])
			j++;
		j--;
		while (argv[1][i])
		{
			if (argv[1][i] != argv[1][j])
				is_palindrome = 0;
			j--;
			i++;
		}
		if (is_palindrome)
		{
			while (*argv[1])
			{
				write (1, argv[1], 1);
				argv[1]++;
			}
		}

	}
	write (1, "\n", 1);
	return (0);
}

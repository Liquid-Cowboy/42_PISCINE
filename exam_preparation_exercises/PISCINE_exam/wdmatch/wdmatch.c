#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;
	int	is = 1;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[1][i] != argv[2][j])
			{
				if (argv[2][j] == '\0')
				{
					is = 0;
					break;
				}
				j++;
			}
			if (!is)
				break;
			i++;
		}
		if (is)
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

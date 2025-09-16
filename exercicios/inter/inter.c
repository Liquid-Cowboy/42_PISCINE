#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;
	int	repeats = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			repeats = 0;
			j = 0;
			while (j < i)
			{
				if (argv[1][j] == argv[1][i])
					repeats = 1;
				j++;
			}
			k = 0;
			while (argv[2][k] && repeats == 0)
			{
				if (argv[1][i] == argv[2][k])
				{
					write (1, &argv[1][i], 1);
					break;
				}
				k++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

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
			k = 0;
			while (k < i)
			{
				if (argv[1][k] == argv[1][i])
				{
					repeats = 1;
					break;
				}
				k++;
			}
			while (argv[2][j] && !repeats)
			{
				if (argv[1][i] == argv[2][j])
				{
					write (1, &argv[1][i], 1);
					break;
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	x = 0;
	int	y = 0;
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i]) 
		{
			if (argv[1][i] >= 'a' && argv [1][i] <= 'z')
			{
				x = (argv[1][i] - 'a') + 1;
				while (y < x)
				{
					write (1, &argv[1][i], 1);
					y++;
				}
				y = 0;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				x = (argv[1][i] - 'A') + 1;
				while (y < x)
				{
					write (1, &argv[1][i], 1);
					y++;
				}
				y = 0;
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

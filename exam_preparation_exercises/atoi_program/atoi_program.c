#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		int	is_negative = 0;
		int	nb = 0;

		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == ' ')
		{
			i++;
		}
		if (argv[1][i] == '+')
			i++;
		if (argv[1][i] == '-')
		{
			is_negative = 1;
			i++;
		}
		while (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			nb = nb * 10 + (argv[1][i] - '0');
			i++;
		}
		if (is_negative)
			nb = -nb;
		printf("%d", nb);
	}
	return (0);
}

#include "ft_abs.h"
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	nbr = 0;
	int	is_negative = 0;

	if (str[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (is_negative)
		nbr = -nbr;
	return (nbr);
}

int	main(int argc, char **argv )
{
	int	i = 0;

	while (argv[i])
	{
		int	nbr = ft_atoi(argv[i]);
		printf("%d\n", ABS(nbr));
		i++;
	}
	return (0);
}

#include "ft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	while (i < argc)
	{
		int	size = 0;

		size = ft_strlen(argv[i]);
		printf("Size is: %d\n", size);
		printf("String is bigger than five: ");
		fflush(stdout);
		if (ft_strlen(argv[i]) > 5)
			ft_putchar('y');
		else
			ft_putchar('n');
		printf("\n");
		if (argv[i + 1])
			printf("Is different by: %d\n", ft_strcmp( argv[i], argv[i + 1]));
		ft_putstr(argv[i]);
		printf("\n\n");
		i++;
	}
	return (0);
}

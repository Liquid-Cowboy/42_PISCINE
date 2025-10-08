#include "ft_point.h"

int	ft_atoi(*str)
{
	int	i = 0;
	int	is_negative = 0;
	int	nbr = 0;

	while (str[i])
	{
		is_negative = 0;
		if (str[i - 1] == '-')
			is_negative = 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * 10 + (str[i] - '0');
			i++;
		}
		if (is_negative) 
			nbr = -nbr;
		if (str[i] == '\0')
			break;
		i++;
		return (nbr);
	}
}

int	main(int argc, char **argv)
{
	
}
t_point

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int	*make_ar(int n)
{
	int	i = 0;
	while (i < nb)
	{
		ar[i] = i;
		i++;
	}
}

void ft_print_combn(int n)
{
	int	ar[n];
	int	i = 0;

	while (i < n)
	{
		ar[n - 1] += i;
		j = 0;
		while (j < n)
		{
			ft_putchar(ar[j] + '0');
			j++;
		}
		i++;
	}
	
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}

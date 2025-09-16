#include <unistd.h>

void ft_putnbr(int nb)
{
	char	c;
	unsigned int	n;

	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	n = nb;
	if (n < 10)
	{
		c = n + 48;
		write (1, &c, 1);
	}	
	if (n > 9)
	{
		ft_putnbr(n / 10);
		c = n % 10 + 48;
		write (1, &c, 1);
	}
}

int	main(void)
{
	ft_putnbr (-2147483648);
	return (0);
}

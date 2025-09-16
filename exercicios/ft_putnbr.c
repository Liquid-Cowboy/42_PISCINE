#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;
	char	*str;

	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	while (nb > 9)
	{
		ft_putnbr(nb / 10);
		n = nb % 10 + '0';
		write (1, &n, 1);
	}
	n = nb;
	write (1, &n, 1);
}

int	main(void)
{
	int	nb;

	nb = 1234;
	ft_putnbr(nb);
	return (0);
}

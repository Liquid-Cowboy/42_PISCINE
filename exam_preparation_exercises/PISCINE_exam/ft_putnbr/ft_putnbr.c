#include <unistd.h>

void ft_putnbr(int nb)
{
	long	n = 0;

	if (nb < 0)
	{
		write (1, "-", 1);
		n = -(long)nb;
	}
	n = nb;
	if (n < 10)
	{
		write (1, &"0123456789"[n], 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		write (1, &"0123456789"[n % 10], 1);
	}
}

int	main(void)
{
	ft_putnbr(0);
	return(0);
}

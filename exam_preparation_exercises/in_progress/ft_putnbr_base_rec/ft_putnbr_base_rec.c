#include <unistd.h>

ft_putnbr_base_rec(int nbr, char *base)
{
//inprogress
}

int	main(void)
{

	ft_putnbr_base_rec(42, "01");
	write (1, "\n", 1);
	ft_putnbr_base_rec(42, "0123456789");
	write (1, "\n", 1);
	ft_putnbr_base_rec(42, "0123456789ABCDEF");
	write (1, "\n", 1);
	ft_putnbr_base_rec(-42, "0123456789");
}

#include <unistd.h>
#include "ft_stock_str.h"

void ft_putnbr(int nb)
{
	long	n;
	
	if (nb < 0)
	{
		write (1, "-", 1);
		n = -(long)nb;
	}
	else
	n = (long)nb;
	if (n < 10)
		write (1, &"0123456789"[n], 1);
	if (n > 9)
	{
		ft_putnbr(n / 10);
		write (1, &"0123456789"[n % 10], 1);
	}
}

void ft_putstr(char *str)
{
	int	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);	
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}

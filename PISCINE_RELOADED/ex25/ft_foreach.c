/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:45:12 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/08 12:45:42 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putnbr(int nb)
{
	long	n;

	if (nb < 0)
	{
		write(1, "-", 1);
		n = -(long)nb;
	}
	else
		n = (long) nb;
	if (n < 10)
		write (1, &"0123456789"[n], 1);
	if (n >= 10)
	{
		ft_putnbr(nb / 10);
		write (1, &"0123456789"[n % 10], 1);
	}
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[6] = {0, 1, 2, 3, 4, 5};
	ft_foreach(tab, 3, &ft_putnbr);
	return (0);
}*/

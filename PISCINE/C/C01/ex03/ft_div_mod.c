/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:54:23 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/02 17:05:57 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 7;
	y = 2;

	ft_div_mod(x,y,&div,&mod);
	printf("%d a dividir por %d da %d e %d", x, y, div, mod);
	return (0);
}*/

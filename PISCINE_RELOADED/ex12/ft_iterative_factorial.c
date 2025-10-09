/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:51:18 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/08 20:01:50 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	res = 1;
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

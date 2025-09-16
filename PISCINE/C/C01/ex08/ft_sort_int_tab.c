/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:40:00 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/03 16:57:20 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	troca;
	int	temp;

	i = 0;
	troca = 1;
	while (troca)
	{
		troca = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				troca = 1;
			}
			i++;
		}
	}
}
/*
int	main(void)
{
	int	i;
	i = 0;
	int	tab[] = {3,9,7,4,1,5,2,6,8,0};
	int size = 10;
	ft_sort_int_tab(tab, size);
	for (i = 0; i < size; i++)
	printf("%d", tab[i]);
	return (0);
}*/

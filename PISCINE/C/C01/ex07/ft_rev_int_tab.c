/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:21:02 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/03 12:39:24 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int     main(void)
{
      
        int i;
        i = 0;
        int size;
        size = 6;
        int  tab[] = {3,5,1,9,8,0};
        ft_rev_int_tab(tab, size);
        for (i = 0; i < size; i++)
        {
            printf("%d", tab[i]);
            if (i != size -1)
            printf(", ");
        }
        return (0);
}*/

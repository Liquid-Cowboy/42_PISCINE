/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:02:35 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/02 17:03:40 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main() {
    int x = 10;
    int y = 20;

    printf("Antes: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}
*/

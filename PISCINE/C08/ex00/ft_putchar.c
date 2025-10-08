/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:50:55 by mnogueir          #+#    #+#             */
/*   Updated: 2025/08/29 10:33:22 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int main(void){
	char c;
	c = 'F';
	ft_putchar(c);
	return 0;
}
*/

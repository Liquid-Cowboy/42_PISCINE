/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:31:17 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/01 18:32:02 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	result;

	if (n < 0)
		result = 'N';
	else
		result = 'P';
	write(1, &result, 1);
}

/*
int	main(void){

	int a;
	int b;

	a = 42;
	b = -30;

	ft_is_negative(a);
	ft_is_negative(b);

	return (0);
}
*/

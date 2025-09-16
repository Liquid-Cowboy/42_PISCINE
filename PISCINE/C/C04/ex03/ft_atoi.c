/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:20:11 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/09 17:50:33 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' '
		|| *str == '+' || *str == '-')
	{
		if (*str == '-')
			i += 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str ++;
	}
	if (i % 2 != 0)
		nb = -nb;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}
*/

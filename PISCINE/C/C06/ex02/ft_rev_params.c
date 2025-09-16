/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:55:02 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/14 10:09:11 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*c;

	(void)argc;
	i = 0;
	c = 0;
	while (argv[i])
		i++;
	i--;
	while (i > 0)
	{
		c = argv[i];
		while (*c)
		{
			write (1, c, 1);
			c++;
		}
		write (1, "\n", 1);
		i--;
	}
	return (0);
}

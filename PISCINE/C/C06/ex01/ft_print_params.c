/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:13:42 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/14 10:06:20 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	argv++;
	while (*argv)
	{
		while (**argv)
		{
			write (1, *argv, 1);
			(*argv)++;
		}
		write (1, "\n", 1);
		argv++;
	}
	return (0);
}

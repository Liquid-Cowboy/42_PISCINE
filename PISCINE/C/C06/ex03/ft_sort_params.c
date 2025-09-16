/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 11:53:21 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/14 10:26:25 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_str(char **argv)
{
	char	*c;

	while (*argv)
	{
		c = *argv;
		while (*c)
		{
			write (1, c, 1);
			c++;
		}
		write (1, "\n", 1);
		argv++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	(void)argc;
	i = 1;
	while (argv[i])
	{
		if ((argv[i + 1] != NULL) && (argv[i][0] > argv[i + 1][0]))
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
			i++;
	}
	argv++;
	write_str(argv);
	return (0);
}

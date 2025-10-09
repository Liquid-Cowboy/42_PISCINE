/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:39:59 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/08 19:15:11 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	val_arg(int argc)
{
	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	if (argc == 1)
	{
		write (2, "File name missing.\n", 19);
		return (1);
	}
	return (0);
}

int	rd_wr(int fd, ssize_t bytes)
{
	char	buf[1024];

	while (1)
	{
		bytes = read(fd, buf, 1024);
		if (bytes == -1)
		{
			write (2, "Cannot read file.\n", 18);
			return (1);
		}
		if (bytes == 0)
			break ;
		write(1, buf, bytes);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ssize_t	bytes;
	ssize_t	fd;

	bytes = 0;
	if (val_arg(argc))
		return (1);
	fd = open (argv[1], O_RDONLY);
	rd_wr (fd, bytes);
	close (fd);
	return (0);
}

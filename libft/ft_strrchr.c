/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 19:30:25 by mnogueir          #+#    #+#             */
/*   Updated: 2025/10/09 19:31:49 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	i;
	char	*ptr;

	i = (char)ft_strlen(s);
	ptr = (char *)s;
	while (*ptr != i)
		ptr++;
	while(*ptr != 0)
	{
		if (*ptr == c)
			return (ptr);
		ptr--;
	}
	return (NULL);
}

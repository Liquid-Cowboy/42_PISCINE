/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:41:43 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/05 12:00:28 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
			*ptr = *ptr + 32;
		ptr++;
	}
	ptr = str;
	if (*ptr >= 'a' && *ptr <= 'z')
		*ptr = *ptr - 32;
	while (*ptr)
	{
		if (!((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')
				|| (*ptr >= '0' && *ptr <= '9')))
			i = 1;
		ptr++;
		if (i && (*ptr >= 'a' && *ptr <= 'z'))
			*ptr = *ptr - 32;
		i = 0;
	}
	return (str);
}

/*int	main(void)
{
    char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("%s", ft_strcapitalize(str));
    return 0;
}*/

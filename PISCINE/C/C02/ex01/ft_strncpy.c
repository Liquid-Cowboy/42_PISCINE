/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:49:37 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/07 12:50:15 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <unistd.h>

int main(void)
{
    char src[] = "Hello";
    char dest[10];  // maior que src para testar o '\0'
    unsigned int n = 10;
    unsigned int i = 0;

    ft_strncpy(dest, src, n);

    // Verifica cada carácter para ver se existe '\0'
    while(i < n)
    {
        if(dest[i] == '\0')
        {
            printf("dest[%d] = '\\0'\n", i);
        }
        else
        {
            printf("dest[%d] = '%c'\n", i, dest[i]);
        }
        i++;
    }

    return 0;
}
*/

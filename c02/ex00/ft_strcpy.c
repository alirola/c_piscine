/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:06:02 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/19 15:52:21 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest [a] = '\0';
	return (dest);
}
/*
int main(void)
{
    char dest[5];
    char *src;

    src = "hello";
    printf("cadena1 %s\n", src);
    ft_strcpy(dest, src);
    printf("cadena2 %s\n", src);
    return(0);
}
*/

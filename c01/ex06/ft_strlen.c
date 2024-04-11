/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:23:22 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/14 17:50:33 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}
/*
int	main(void)
{
	char	str[] = "nestor es un maquina";
	char	*ptr_str;
	int		counter;

	ptr_str = str;
	counter = ft_strlen(ptr_str);
	printf("%d", counter);
	return (0);
}
*/

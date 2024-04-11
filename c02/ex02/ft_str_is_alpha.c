/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:25:39 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/19 15:50:01 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[1] > 122))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char str[] = "jkfl";
	int	n;

	n = ft_str_is_alpha(str);
	printf("%d", n);
	return(0);
}
*/
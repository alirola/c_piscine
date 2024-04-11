/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:33:25 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/14 17:55:25 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int	main(void)
{
	int	c;
	int	cc;
	int	*ptr_c;
	int	*ptr_cc;

	c = 45;
	cc = 42;
	ptr_c = &c;
	ptr_cc = &cc;
	ft_swap(ptr_c, ptr_cc);
	printf ("%d", c);
	printf (" ");
	printf ("%d", cc);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:31:24 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/14 17:52:50 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cociente;
	int	resto;

	cociente = *a / *b;
	resto = *a % *b;
	*a = cociente;
	*b = resto;
}
/*
int		main(void)
{
	int	*a;
	int *b;
	int num1;
	int num2;

	num1 = 9;
	num2 = 2;
	a = &num1;
	b = &num2;
	ft_ultimate_div_mod(a, b);
	printf("%d", num1);
	printf("%d", num2);
	return(0);
}*/
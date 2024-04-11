/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:06:39 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/10 12:26:22 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int cociente;
	int resto;

	a = 15;
	b = 2;
	div = &cociente;
	mod = &resto;
	ft_div_mod(a, b, div, mod);
	printf("%d", cociente);
	printf(" ");
	printf("%d", resto);
}*/
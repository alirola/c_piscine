/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:38:10 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/14 17:49:54 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	pos;

	pos = 0;
	while (pos < size)
	{
		aux = tab[pos];
		tab[pos] = tab[size - 1];
		tab[size - 1] = aux;
		pos++;
		size--;
	}
}
/*
int main(void)
{
int   array[] = {'0', '1', '2', '3', '4', '5', '6', '6', '7', '8', '9'};
int   *ptr_array;
int size;

size = sizeof(array);
ptr_array = array;
ft_rev_int_tab(ptr_array, size);
write(1, &array, size);
return(0);
}
*/
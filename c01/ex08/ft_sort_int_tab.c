/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:18:04 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/14 17:48:24 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab( int *tab, int size)
{
	int	i;
	int	aux;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
		size--;
	}
}
/*
int main(void)
{
    int array[4] = {4, 9, 3, 8};
    int size;
    int i;
    int *ptr_array;

    ptr_array = array;
    size = 4;
    ft_sort_int_tab(ptr_array, size);
    i = 0;
    while(i < size)
    {
        printf("%i", array[i]);
        i++;
    }
    return(0);
}*/
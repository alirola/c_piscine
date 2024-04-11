/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:41:05 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/07 19:54:57 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	index;

	index = '0';
	while (index <= '9')
	{
		write (1, &index, 1);
		index++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:38:06 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/07 19:53:53 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	index;

	index = 'a';
	while (index <= 'z')
	{
		write(1, &index, 1);
		index++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:59:27 by alirola-          #+#    #+#             */
/*   Updated: 2023/02/22 18:02:44 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[0][i] != '\0')
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

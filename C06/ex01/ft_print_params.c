/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:39:00 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/22 15:12:53 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_params(char *av)
{
	while (*av)
	{
		write (1, av, 1);
		av++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	count;

	count = 1;
	while (count < ac)
	{
		write_params(av[count]);
		count++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:41:20 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/22 15:03:34 by zeekinci         ###   ########.tr       */
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
	while (ac > 1)
	{
		write_params(av[ac - 1]);
		ac--;
	}
	return (0);
}

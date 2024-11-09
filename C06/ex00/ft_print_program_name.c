/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:37:18 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/22 15:23:42 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	(void) ac;
	while (*av[0])
	{
		write(1, av[0], 1);
		av[0]++;
	}
	write(1, "\n", 1);
	return (0);
}

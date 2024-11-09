/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:42:52 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/22 15:41:43 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_params(const char *av)
{
	while (*av)
	{
		write (1, av, 1);
		av++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(const char *first_cmp, const char *second_cmp)
{
	while (*first_cmp && *second_cmp
		&& ((unsigned char)*first_cmp == (unsigned char)*second_cmp))
	{
		first_cmp++;
		second_cmp++;
	}
	return ((unsigned char)*first_cmp - (unsigned char)*second_cmp);
}

void	ft_swap(char **av1, char **av2)
{
	char	*for_copy;

	for_copy = *av1;
	*av1 = *av2;
	*av2 = for_copy;
}

void	ft_sort_params(int ac, char **av)
{
	int	first_cmp;
	int	second_cmp;

	first_cmp = 1;
	while (first_cmp < ac -1)
	{
		second_cmp = first_cmp + 1;
		while (second_cmp < ac)
		{
			if (ft_strcmp(av[first_cmp], av[second_cmp]) > 1)
				ft_swap(&av[first_cmp], &av[second_cmp]);
			second_cmp++;
		}
		first_cmp++;
	}
}

int	main(int ac, char **av)
{
	int	count;

	ft_sort_params(ac, av);
	count = 1;
	while (ac > count)
	{
		write_params(av[count]);
		count++;
	}
	return (0);
}

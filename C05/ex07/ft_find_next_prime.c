/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:25:53 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/21 18:29:36 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;
	int	next_prime;

	is_prime = ft_is_prime(nb);
	while (is_prime == 0)
	{
		next_prime = ft_is_prime(nb);
		if (next_prime == 1)
			return (nb);
		nb++;
	}
	return (nb);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:29:32 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/21 13:52:58 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *base)
{
	char	*size;

	size = base;
	while (*size)
		size++;
	return (size - base);
}

int	ft_return_null(char *base, int base_len)
{
	char	*control;

	if (base_len < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-'
			|| *base == ' ' || (*base <= 13 && *base >= 9))
			return (0);
		control = base + 1;
		while (*control)
		{
			if (*control == *base)
				return (0);
			control++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base_len(int nbr, char *base, int base_len)
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base_len(-(nbr / base_len), base, base_len);
		ft_putnbr_base_len(-(nbr % base_len), base, base_len);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		ft_putnbr_base_len(nbr, base, base_len);
	}
	else if (nbr >= base_len)
	{
		ft_putnbr_base_len(nbr / base_len, base, base_len);
		ft_putnbr_base_len(nbr % base_len, base, base_len);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = str_len(base);
	if (ft_return_null(base, base_len) == 0)
		return ;
	ft_putnbr_base_len(nbr, base, base_len);
}

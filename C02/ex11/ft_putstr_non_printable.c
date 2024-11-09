/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:37:21 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/14 17:37:00 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex_digits;
	unsigned char	avoid_negative;

	hex_digits = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		avoid_negative = (unsigned char)str[i];
		if (avoid_negative >= 32 && avoid_negative <= 126)
			write(1, &avoid_negative, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &hex_digits[avoid_negative / 16], 1);
			write(1, &hex_digits[avoid_negative % 16], 1);
		}
		i++;
	}
}

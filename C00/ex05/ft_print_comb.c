/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:30:59 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/08 19:06:17 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				write(1, &f, 1);
				write(1, &s, 1);
				write(1, &t, 1);
				if (!(f == '7' && s == '8' && t == '9'))
					write(1, ", ", 2);
				t++;
			}
			s++;
		}
		f++;
	}
}

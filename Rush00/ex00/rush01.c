/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:14:55 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/07 17:26:04 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character);

void	draw_line(int width, char start_char, char mid_char, char end_char)
{
	int	column;

	column = 0;
	while (column < width)
	{
		if (column == 0)
			ft_putchar(start_char);
		else if (column == width - 1)
			ft_putchar(end_char);
		else
			ft_putchar(mid_char);
		column++;
	}
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int	row;

	if (width <= 0 || height <= 0)
	{
		if (width <= 0)
			write(2, "Error: Width must be greater than 0.\n", 38);
		if (height <= 0)
			write(2, "Error: Height must be greater than 0.\n", 39);
		return ;
	}
	row = 0;
	while (row < height)
	{
		if (row == 0)
			draw_line(width, '/', '*', '\\');
		else if (row == height - 1)
			draw_line(width, '\\', '*', '/');
		else
			draw_line(width, '*', ' ', '*');
		row++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:30:02 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/21 15:42:34 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (*base == '-' || *base == '+'
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

int	check_in_base(char str, char *base)
{
	char	*control;
	int		index;

	control = base;
	index = 0;
	while (*control)
	{
		if (*control == str)
			return (index);
		control++;
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	sign;
	int	result;

	base_len = str_len(base);
	sign = 1;
	result = 0;
	if (ft_return_null(base, base_len) == 0)
		return (0);
	while (*str && ((*str <= 13 && *str >= 9) || *str == ' '))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (check_in_base(*str, base) != -1))
	{
		result = result * base_len + check_in_base(*str, base);
		str++;
	}
	return (sign * result);
}

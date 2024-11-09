/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:04:59 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/17 12:17:27 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*sec;
	char	*start;

	if (!*to_find)
		return (str);
	while (*str)
	{
		start = str;
		sec = to_find;
		while (*str == *sec && *sec && *str)
		{
			sec++;
			str++;
		}
		if (!*sec)
			return (start);
		str = start + 1;
	}
	return (0);
}

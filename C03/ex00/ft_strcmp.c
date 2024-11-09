/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:29:20 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/17 11:30:25 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((unsigned char)*s1 || (unsigned char)*s2)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
		{
			if ((unsigned char)*s1 > (unsigned char)*s2)
				return (1);
			else
				return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}

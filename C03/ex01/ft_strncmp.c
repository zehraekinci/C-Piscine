/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:55:31 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/17 11:32:21 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (((unsigned char)*s1 || (unsigned char)*s2) && n >= 1)
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
		n--;
	}
	return (0);
}

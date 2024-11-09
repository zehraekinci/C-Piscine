/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:54:28 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/17 12:29:58 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	const char		*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dest;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	dlen = d - dest;
	n = size - dlen;
	while (*s)
		s++;
	if (n == 0)
		return (dlen + (unsigned int)s);
	s = src;
	while (*s && n-- > 1)
	{
		*d++ = *s++;
	}
	*d = '\0';
	return (dlen + (unsigned int)(s - src));
}

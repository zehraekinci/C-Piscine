/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:35:33 by zeekinci          #+#    #+#             */
/*   Updated: 2024/07/14 15:12:20 by zeekinci         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	in_word;

	i = 0;
	in_word = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (!in_word)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				in_word = 1;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		else
			in_word = 0;
		i++;
	}
	return (str);
}

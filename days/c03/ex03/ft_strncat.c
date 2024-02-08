/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:19:48 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/24 03:19:32 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_len;
	unsigned int	s_len;

	d_len = 0;
	s_len = 0;
	while (dest[d_len] != '\0')
	{
		d_len++;
	}
	while ((s_len < nb) && (src[s_len] != '\0'))
	{
		dest[d_len] = src[s_len];
		s_len++;
		d_len++;
	}
	dest[d_len] = '\0';
	return (dest);
}

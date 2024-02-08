/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:10:22 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/27 01:38:03 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_src;
	unsigned int	l_dest;
	unsigned int	result;
	unsigned int	i;

	i = 0;
	l_src = 0;
	l_dest = 0;
	while (dest[l_dest] && l_dest < size)
			l_dest++;
	while (src[l_src])
			l_src++;
	result = l_src + l_dest;
	if (l_dest == size)
		return (result);
	while (src[i] && l_dest < size - 1)
	{
		dest[l_dest] = src[i];
		i++;
		l_dest++;
	}
	dest[l_dest] = '\0';
	return (result);
}

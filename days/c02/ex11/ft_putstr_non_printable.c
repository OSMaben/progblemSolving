/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:09:33 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/24 02:16:03 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char c)
{
	unsigned char	chr;
	char			*hexa;

	hexa = "0123456789abcdef";
	chr = c;
	ft_putchar('\\');
	ft_putchar(hexa[chr / 16]);
	ft_putchar(hexa[chr % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_hexa(str[i]);
		}
		i++;
	}
}

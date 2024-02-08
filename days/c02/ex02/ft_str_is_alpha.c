/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <oben-maz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:40:27 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/23 13:24:57 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
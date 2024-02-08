/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:17:21 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/24 01:58:01 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_char;

	new_char = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((new_char == 1) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((new_char == 0) && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
				new_char = 1;
		else
			new_char = 0;
		i++;
	}
	return (str);
}

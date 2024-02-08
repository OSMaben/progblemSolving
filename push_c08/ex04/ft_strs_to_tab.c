/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 03:01:29 by oben-maz          #+#    #+#             */
/*   Updated: 2023/09/06 00:02:55 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*temp;

	temp = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!temp)
		return (NULL);
	i = 0;
	while (*src)
	{
		temp[i] = *src;
		src++;
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*osmben;

	osmben = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!osmben)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		osmben[i].size = ft_strlen(av[i]);
		osmben[i].str = av[i];
		osmben[i].copy = ft_strdup(av[i]);
		i++;
	}
	osmben[i].size = 0;
	osmben[i].str = 0;
	osmben[i].copy = 0;
	return (osmben);
}

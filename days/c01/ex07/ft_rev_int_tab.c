/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <oben-maz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:49:16 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/20 23:12:27 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;
	int	temp;

	i = 0;
	a = size - 1;
	while (i < a)
	{
		temp = tab[i];
		tab[i] = tab[a];
		tab[a] = temp;
		i++;
		a--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_nb.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 22:53:38 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/31 23:57:41 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
	i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_nb(nb))
	{
		nb++;
	}
	return (nb);
}

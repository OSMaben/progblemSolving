/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <oben-maz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:53:30 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/31 19:58:59 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	j;

	j = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		j = j * nb;
		nb--;
	}
	return (j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:07:16 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/30 21:46:21 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int i;
	int *tab;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}

	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	
	if (tab)
	{
		i = 0;
		while (i < size)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	else
		return 0;
	*range = tab;
	return (i);
}

int main()
{
	int *range = NULL;
	int size = ft_ultimate_range(&range, 1, 10);

	if(range != NULL)
	{
		printf("allocated memory size is %d\n", size);
		int i = 0;
		while(i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
		free(range);
	}else
		printf("Memory allocation failed");
	return (0);
}

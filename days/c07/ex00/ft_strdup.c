/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oben-maz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:24:55 by oben-maz          #+#    #+#             */
/*   Updated: 2023/08/29 02:57:08 by oben-maz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char *temp = (char *)malloc(sizeof(char) * ft_strlen(src));
	
	int i;
	i = 0;
	while(*src)
	{
		temp[i] = *src;
		src++;
		i++;
	}
	temp[i] = '\0';
	return (temp);
}


int main(void)
{
	char tab[] = "Oussama";
	char *tab2;
	printf("%p\n", tab);
	tab2 = ft_strdup(tab);
	printf("-------------------\n");
	printf("%p\n", tab2);
}

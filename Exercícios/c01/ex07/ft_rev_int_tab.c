/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:32:56 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/18 18:55:52 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	init;
	int	fim;
	int	temp;

	init = 0;
	fim = size -1;
	while (init < fim)
	{
		temp = tab[init];
		tab[init] = tab[fim];
		tab[fim] = temp;
		init++;
		fim--;
	}
}

int	main(void)
{
	int	array[12];
	int	i;

	array[0] = 40;
	array[1] = 50;
	array[2] = 60;
	array[3] = 70;
	array[4] = 40;
	array[5] = 50;
	array[6] = 60;
	array[7] = 70;
	array[8] = 40;
	array[9] = 50;
	array[10] = 60;
	array[11] = 70;
	i = 0;
	ft_rev_int_tab(array, 12);
	printf("Array invertido: ");
	while (i <= 11)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}

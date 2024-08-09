/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:46:31 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/16 14:20:35 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	meuArray[] = {25, 62, 9, 14, 55, 36};	
	int	tamanho = sizeof(meuArray) / sizeof(meuArray[0]);
    
	printf("Array original: ");
	for (int i = 0; i < tamanho; i++)
	{
		printf("%d ", meuArray[i]);
	}
	printf("\n");

	ft_sort_int_tab(meuArray, tamanho);

	printf("Array ordenado: ");
	for (int i = 0; i < tamanho; i++)
	{
		printf("%d ", meuArray[i]);
	}
	printf("\n");

	return (0);
 }*/

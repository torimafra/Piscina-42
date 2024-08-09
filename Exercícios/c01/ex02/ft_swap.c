/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:53:26 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/16 15:04:17 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 2;

	printf("Antes da função: \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	ft_swap(&a, &b);
	
	printf("Depois da função: \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}*/

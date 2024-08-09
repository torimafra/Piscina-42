/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:56:34 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/17 10:59:41 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}

/*int   main(void)
{
	int     a;
	int     b;

	a = 9;
	b = 5;

	printf("Antes da função: \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	ft_ultimate_div_mod(&a, &b);

	printf("Depois da função: \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return (0);
}*/

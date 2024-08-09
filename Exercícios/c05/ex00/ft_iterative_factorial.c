/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:30:20 by vimafra-          #+#    #+#             */
/*   Updated: 2024/08/01 11:05:39 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb > 1)
		{
			result = result * (nb - 1);
			nb--;
		}
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/

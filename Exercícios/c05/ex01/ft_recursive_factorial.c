/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:51:49 by vimafra-          #+#    #+#             */
/*   Updated: 2024/08/01 11:06:46 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		if (nb > 1)
			result = result * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
	return (0);
}*/

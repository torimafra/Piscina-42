/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:36:07 by vimafra-          #+#    #+#             */
/*   Updated: 2024/08/01 11:08:57 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
	{
		result = result * ft_recursive_power(nb, power - 1);
	}
	return (result);
}

/*int   main(void)
{
        printf("%d\n", ft_recursive_power(-4, 5));
        return (0);
}*/

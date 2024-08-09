/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:39:34 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/31 11:00:28 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	if (!(str[i] >= 0 && str[i] <= 9))
		return (0);
	while (str[i] >= 0 && str[i] <= 9)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("\f\n\r\t\v ---+--+1234ab567"));
	return (0);
}*/

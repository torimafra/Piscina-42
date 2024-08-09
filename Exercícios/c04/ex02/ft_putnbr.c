/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:43:31 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/31 14:17:40 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int n)
{
	if (n > 9)
		write_number(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	write_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	*min_int;
	int		i;

	i = 0;
	min_int = "-2147483648";
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write_str(min_int);
		}
		else if (nb > -2147483648)
		{
			write(1, "-", 1);
			nb = nb * -1;
			write_number(nb);
		}
	}
	else if (nb <= 2147483647)
	{
		write_number(nb);
	}
}

/*int	main(void)
{
	//ft_putnbr(-2147483648);
	ft_putnbr(42);
	write(1, "\n", 1);
	return (0);
}*/

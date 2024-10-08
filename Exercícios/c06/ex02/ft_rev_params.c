/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:20:51 by vimafra-          #+#    #+#             */
/*   Updated: 2024/08/01 10:56:28 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc;
	j = 0;
	while (argv[i - 1] && i > 1)
	{
		while (argv[i - 1][j])
		{
			write(1, &argv[i - 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i--;
	}
	return (0);
}

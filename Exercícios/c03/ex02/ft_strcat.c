/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:54:31 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/24 17:55:21 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	parte01[30] = "dois mais dois ";
	char	parte02[15] = "igual a quatro";

	printf("%s\n", parte01);
	printf("%s\n", ft_strcat(parte01, parte02));
	return (0);
}*/

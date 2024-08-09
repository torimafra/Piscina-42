/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:47:30 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/29 17:05:09 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a])
	{
		a++;
	}
	while (b < nb && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int   main(void)
{
        char    parte01[30] = "dois mais dois ";
        char    parte02[15] = "igual a quatro";

        printf("%s\n", parte01);
        printf("%s\n", ft_strncat(parte01, parte02, 2));
	//printf("%s\n", parte01);
        return (0);
}*/

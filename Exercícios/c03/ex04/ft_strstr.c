/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:23:25 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/31 12:41:30 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[b] == '\0')
	{
		return (str);
	}
	while (str[a])
	{
		while (str[a + b] && str[a + b] == to_find[b])
		{
			b++;
		}
		if (to_find[b] == '\0')
		{
			return (str + a);
		}
		b = 0;
		a++;
	}
	return (0);
}

/*int	main(void)
{
	char 	*s1 = "se aquele se encontra aqui, me ache";
	char	*s2 = "enc";
	
	printf("%s\n", ft_strstr(s1, s2));
	return (0);
}*/

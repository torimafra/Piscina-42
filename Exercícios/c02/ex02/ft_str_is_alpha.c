/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:08:49 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/23 10:50:05 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;
	int	l;

	i = 0;
	alpha = 1;
	l = 0;
	while (str[l])
	{
		l++;
	}
	if (l == 0)
	{
		return (alpha);
	}
	while (str[i])
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			alpha = 0;
			return (alpha);
		}
		i++;
	}
	return (alpha);
}

/*int	main(void)
{
	char	*str;
	char	*str2;
	char	*str3;

	str = "alfanuMerica";
	str2  = "aqui 1 texto";
	str3 = "";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));	
	return (0);
}*/

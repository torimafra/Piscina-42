/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:40:48 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/23 10:57:05 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[i] < 'a' || str[i] > 'z')
		{
			alpha = 0;
			return (alpha);
		}
		i++;
	}
	return (alpha);
}

/*int   main(void)
{
        char    *str;
        char    *str2;
        char    *str3;

        str = "alfanumerica";
        str2  = "alfaNumerica";
        str3 = "";

        printf("%d\n", ft_str_is_lowercase(str));
        printf("%d\n", ft_str_is_lowercase(str2));
        printf("%d\n", ft_str_is_lowercase(str3));  

        return (0);
}*/

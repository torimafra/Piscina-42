/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:33:56 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/23 11:00:28 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
		if (str[i] < 'A' || str[i] > 'Z')
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

        str = "ALFANUMERICA";
        str2  = "ALFAnUMERICA";
        str3 = "";

        printf("%d\n", ft_str_is_uppercase(str));
        printf("%d\n", ft_str_is_uppercase(str2));
        printf("%d\n", ft_str_is_uppercase(str3));  

        return (0);
}*/

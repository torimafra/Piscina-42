/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:22:27 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/23 10:53:23 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
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
		if (str[i] < '0' || str[i] > '9')
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

        str = "1234567890";
        str2  = "123A456";
        str3 = "";

        printf("%d\n", ft_str_is_numeric(str));
        printf("%d\n", ft_str_is_numeric(str2));
        printf("%d\n", ft_str_is_numeric(str3));  

        return (0);
}*/

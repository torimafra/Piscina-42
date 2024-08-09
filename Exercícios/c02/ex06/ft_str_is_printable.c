/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:44:13 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/23 11:02:21 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (str[i] < ' ' || str[i] > '~')
		{
			alpha = 0;
			return (0);
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
        str2  = "ALFA•nUMERICA";
        str3 = "";

        printf("%d\n", ft_str_is_printable(str));
        printf("%d\n", ft_str_is_printable(str2));
        printf("%d\n", ft_str_is_printable(str3));  

        return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:09:03 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/23 18:07:12 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_alpha(char c)
{
	int	i;

	i = 0;
	if (c < '0' || c > 'z')
	{
		i = 1;
	}
	else if (c > '9' && c < 'A')
	{
		i = 1;
	}
	else if (c > 'Z' && c < 'a')
	{
		i = 1;
	}
	return (i);
}

void	to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upper;

	i = 0;
	upper = 0;
	to_lower(str);
	while (str[i])
	{
		if (upper == 0 && str[i] >= 'a' && str[i] <= 'z' && \
				(i == 0 || is_alpha(str[i - 1]) == 1))
		{
			str[i] = str[i] - 32;
			upper = 1;
		}
		else if (is_alpha(str[i]) == 1)
		{
			upper = 0;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	//char	str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	str[] = "oItudoBEM ? 42paLAVras";
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/

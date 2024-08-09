/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimafra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:21:13 by vimafra-          #+#    #+#             */
/*   Updated: 2024/07/24 14:23:20 by vimafra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != '\0' && s2[i] != '\0')
	{
		result = s1[i] - s2[i];
	}
	else if (s1[i] == '\0' && s2[i] != '\0')
	{
		result = -1;
	}
	else if (s1[i] != '\0' && s2[i] == '\0')
	{
		result = 1;
	}
	return (result);
}

/*int	main(void)
{
	char str1[] = "abcd";
	char str2[] = "abcde";

	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}*/

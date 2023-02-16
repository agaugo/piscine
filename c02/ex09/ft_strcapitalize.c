/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/23 12:52:59 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/23 12:53:00 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++;
			while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "			HELLO MY NAME Is 555gnuppa snuppa, where are YOU from???				";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
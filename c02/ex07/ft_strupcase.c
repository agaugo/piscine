/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/21 19:00:13 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/21 21:43:33 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			i++;
		}
	}
	return (str);
}
/*
int main(void)
{
	char str[]= {'h', 'a', 'l', 'l', 'o'};
	printf("%s", ft_strupcase(str));
	return (0);
}
*/
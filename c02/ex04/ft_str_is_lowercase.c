/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/21 17:56:47 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/21 18:43:19 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				i++;
			}
			else
			{
				r = 0;
				break ;
			}
		}
	}
	return (r);
}
/*
int main(void)
{
	printf("%d", ft_str_is_lowercase(""));
	return 0;
}
*/

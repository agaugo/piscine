/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/21 18:44:57 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/21 18:50:58 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d", ft_str_is_uppercase("ff&&&&&f"));
	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/21 18:52:27 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/21 18:58:35 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= ' ' && str[i] <= '~')
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
	printf("%d", ft_str_is_printable("000   aaaa   bbbb ~~~~~!!!!!"));
	return 0;
}
*/

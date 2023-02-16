/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/20 17:03:16 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/20 17:11:04 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	r;
	int	i;

	r = 1;
	i = 0;
	if (*str == '\0')
	{
		return (r);
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d\n", ft_str_is_numeric("test1234"));
	return 0;
}
*/

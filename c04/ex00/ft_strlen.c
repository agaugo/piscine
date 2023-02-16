/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 11:22:39 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/26 11:32:35 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		i++;
		c++;
	}
	return (c);
}

/*
int main(void)
{
	printf("%d\n", ft_strlen("hello"));
	return (0);
}
*/

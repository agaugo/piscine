/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 20:18:51 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/09/01 20:43:15 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	div;

	div = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (div <= 46341)
		{
			if (div * div == nb)
				return (div);
			else
				div++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(64));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 17:40:43 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/09/01 20:59:59 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	multiplier;

	multiplier = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (multiplier > 0)
		{
			nb *= multiplier;
			multiplier--;
		}
		return (nb);
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
*/

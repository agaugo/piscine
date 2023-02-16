/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 18:40:02 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/09/01 19:10:40 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		if (power > 1)
		{
			if (nb > 0)
				return (nb * ft_recursive_power(nb, power - 1));
			else
				return ((nb * -1) * ft_recursive_power(nb, power - 1));
		}
		return (nb);
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(8, 2));
	return (0);
}
*/

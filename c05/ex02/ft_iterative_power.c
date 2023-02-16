/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 18:22:59 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/09/01 18:39:18 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			if (nb > 0)
				nb = nb * nb;
			else
			{
				nb = nb * nb;
				nb *= -1;
			}
			power--;
		}
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(-4, 2));
	return (0);
}
*/

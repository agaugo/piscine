/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 20:43:42 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/09/01 20:52:45 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	else
	{
		while (div > 1 && div < nb)
		{
			if (nb % div == 0)
				return (0);
			else
				div++;
		}
		return (1);
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(9));
	return (0);
}
*/

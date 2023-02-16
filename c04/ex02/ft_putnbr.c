/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/26 11:50:00 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/09/01 14:48:57 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str, int i)
{
	i = i - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	ft_recursion(char *int_string, int nb, int i)
{
	int		value;

	if (nb != 0)
	{
		value = nb % 10;
		nb = nb / 10;
		int_string[i] = value + '0';
		i++;
		ft_recursion (int_string, nb, i);
	}
	else
		ft_putstr(int_string, i);
}

void	ft_putnbr(int nb)
{
	char	int_string[10];

	if (nb == 2147483647)
		write(1, "2147483647", 10);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		ft_recursion(int_string, nb, 0);
	}
}
/*
int	main(void)
{
	ft_putnbr(-11);
	return (0);
}
*/

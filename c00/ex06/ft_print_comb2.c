/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <hflohil-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/12 14:31:15 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/12 14:54:30 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a_one, char a_two, char b_one, char b_two)
{
	if (a_one == '9' & a_two == '9' & b_one == '9' & b_two == '8')
	{
		write(1, &a_one, 1);
		write(1, &a_two, 1);
		write(1, " ", 1);
		write(1, &b_one, 1);
		write(1, &b_two, 1);
	}
	else
	{
		write(1, &a_one, 1);
		write(1, &a_two, 1);
		write(1, " ", 1);
		write(1, &b_one, 1);
		write(1, &b_two, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(char a_one, char a_two, char b_one, char b_two)
{
	while (a_one <= '9')
	{
		while (a_two <= '9')
		{
			while (b_one <= '9')
			{
				while (b_two <= '9')
				{
					if (a_one != b_one || a_two != b_two)
					{
						ft_putchar(a_one, a_two, b_one, b_two);
					}
					b_two++;
				}
			b_two = '0';
			b_one++;
			}
		b_one = '0';
		a_two++;
		}
	a_two = '0';
	a_one++;
	}
}

int	main(void)
{
	char	a_one;
	char	a_two;
	char	b_one;
	char	b_two;

	a_one = '0';
	a_two = '0';
	b_one = '0';
	b_two = '0';
	ft_print_comb2(a_one, a_two, b_one, b_two);
	return (0);
}

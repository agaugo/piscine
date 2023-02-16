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

void	putchar(int p_one, int p_two, int p_three)
{
	if (p_one == 55 && p_two == 56 && p_three == 57)
	{
		write(1, &p_one, 1);
		write(1, &p_two, 1);
		write(1, &p_three, 1);
	}
	else
	{
		write(1, &p_one, 1);
		write(1, &p_two, 1);
		write(1, &p_three, 1);
		write(1, ", ", 2);
	}
}

void	while_function(int p_one, int p_two, int p_three)
{
	while (p_one <= 57)
	{
		while (p_two <= 57)
		{
			while (p_three <= 57)
			{
				if (p_one <= p_two && p_two <= p_three)
				{
					if (p_one != p_two && p_two != p_three && p_three != p_one)
					{
						putchar(p_one, p_two, p_three);
					}
				}
				p_three++;
			}
		p_three = 48;
		p_two++;
		}
	p_two = 48;
	p_one++;
	}
}

void	ft_print_comb(void)
{
	while_function(48, 48, 48);
}

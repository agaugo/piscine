/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <hflohil-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/12 12:13:21 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/12 14:35:24 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	array[10];
	int		index;
	int		digits;

	index = 0;
	digits = 48;
	while (index < 10)
	{
		array[index] = digits;
		write(1, &array[index], 1);
		index++;
		digits++;
	}
}

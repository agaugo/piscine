/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 18:19:44 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/11 18:51:39 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{	
	int	alphabet_minimum;
	int	alphabet_ascii;

	alphabet_minimum = 97;
	alphabet_ascii = 122;
	while (alphabet_minimum <= alphabet_ascii)
	{
		write(1, &alphabet_ascii, 1);
		alphabet_ascii--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <hflohil-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/11 15:27:03 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/12 14:34:21 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void)
{
	int	alphabet_limit;
	int	alphabet_ascii;

	alphabet_limit = 122;
	alphabet_ascii = 97;
	while (alphabet_ascii <= alphabet_limit)
	{
		write(1, &alphabet_ascii, 1);
		alphabet_ascii++;
	}
}

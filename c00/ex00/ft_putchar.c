/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <hflohil-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/10 19:39:08 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/12 14:33:37 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
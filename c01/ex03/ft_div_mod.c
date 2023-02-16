/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 19:54:15 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/16 20:06:55 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	ab_div;
	int	ab_modulo;

	ab_div = a / b;
	ab_modulo = a % b;
	*div = ab_div;
	*mod = ab_modulo;
}

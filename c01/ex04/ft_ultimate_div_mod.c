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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	var_a;
	int	var_b;

	var_a = *a;
	var_b = *b;
	*a = var_a / var_b;
	*b = var_a % var_b;
}

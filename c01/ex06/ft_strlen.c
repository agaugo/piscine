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

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		num++;
		str++;
	}
	return (num);
}

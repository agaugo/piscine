/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 15:58:29 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/18 18:39:12 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	return_value;

	return_value = 1;
	index = 0;
	if (str[index] != '\0')
	{
		while (str[index] != '\0')
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
			{
			}
			else if (str[index] >= 'a' && str[index] <= 'z')
			{
			}
			else
			{
				return_value = 0;
				break ;
			}
			index++;
		}
	}
	return (return_value);
}

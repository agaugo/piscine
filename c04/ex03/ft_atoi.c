/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/30 12:31:46 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/09/01 14:56:54 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_previous(char *str, int i)
{
	while (i >= 0)
	{
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] == '-')
				|| (str[i] == '+') || (str[i] >= 9 && str[i] <= 13)
				|| (str[i] == 32)))
			return (0);
		else
			i--;
	}
	return (1);
}

int	check(char *str, int i)
{
	if ((str[i + 1] == '-') || (str[i + 1] == '+')
		|| (str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (1);
	else
		return (0);
}

int	ft_atoi_sep(int i, int neg_or_pos, int nb, char *str)
{
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			if (check(str, i))
				neg_or_pos *= -1;
			else
				return (0);
		}
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			if (check_previous(str, i))
			{
				if (nb == 0)
					nb = str[i] - '0';
				else
					nb += str[i] - '0';
				if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
					break ;
				nb *= 10;
			}
		}
		i++;
	}
	return (nb * neg_or_pos);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg_or_pos;
	int	nb;

	i = 0;
	nb = 0;
	neg_or_pos = 1;
	return (ft_atoi_sep(i, neg_or_pos, nb, str));
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("	---934334350 - 1234ab567"));
	return (0);
}
*/
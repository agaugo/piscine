/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 13:51:04 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/25 13:51:07 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	if (i != n && s2[i] != '\0')
		return (-1);
	else
		return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_strncmp("", "fff", 5));
	printf("%d\n", strncmp("", "fff", 5));
}
*/
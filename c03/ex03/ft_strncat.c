/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:09:13 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/25 15:09:14 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
		c++;
	while (src[i] != '\0' && i < nb)
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int main(void)
{
	char destination[60] = "hello hello ";
	char source[] = "vriend";
	printf("%s\n", ft_strncat(destination, source, 5));

	return (0);
}
*/
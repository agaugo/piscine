/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 14:27:17 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/25 14:27:28 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
		c++;
	while (src[i] != '\0')
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
	char destination[30] = "hello, ";
	char source[30] = "my friend";

	printf("%s\n", ft_strcat(destination, source));
	printf("%s\n", ft_strcat(destination, source));	

	return 0;
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 15:44:49 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/21 20:19:37 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char destination[60] = "fffffffffffffffffffffffff";
	char source[10] = "soupsoups";

	printf("%s\n", ft_strncpy(destination, source, 9));
	printf("%s\n", strncpy(destination, source, 9));

	return 0;
}
*/

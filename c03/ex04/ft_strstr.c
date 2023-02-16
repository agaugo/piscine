/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hflohil- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:33:06 by hflohil-      #+#    #+#                 */
/*   Updated: 2022/08/25 15:33:07 by hflohil-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int c;
	int x;
	char *str_init;

	str_init = &str[x];
	i = 0;
	c = 0;

	if (to_find[c] == '\0')
		return (str) ;

	while (str[i] != '\0')
	{
		if (str[i] == to_find[c])
		{
			x = i;
			c++;
			i++;
			while(to_find[c] != '\0')
			{
				if (!(to_find[c] == str[i]))
					return (0) ;
				else
					c++;
			}
		}
		else
			i++;
	}
	return(str_init) ;
}

int main(void)
{
	char haystack[] = "hello snoopdogg";
	char needle[] = "0";
	printf("%s\n", ft_strstr(haystack, needle));

	return (0);
}
*/
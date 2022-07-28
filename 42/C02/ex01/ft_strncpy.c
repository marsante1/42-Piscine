/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:38:51 by masantia          #+#    #+#             */
/*   Updated: 2022/07/28 17:08:20 by masantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
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
int	main(void)
{
	char	a[12] = "hola 42";
	char	c[12] = "hola 42";
	char	b[22] = "hello world";
	char	d[22] = "hello world";
	strncpy(a, b, 16);
	printf("%s - %s\n", a, b);
	ft_strncpy(c, d, 16);
	printf("%s - %s\n", c, d);
	return (0);
}*/

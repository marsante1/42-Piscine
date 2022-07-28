/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:46:31 by masantia          #+#    #+#             */
/*   Updated: 2022/07/27 12:52:02 by masantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char*src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	a[22] = "hello world";
	char	c[22] = "hello world";
	char	b[22] = "holita piscina";
	char	d[22] = "holita piscina";

	printf("%s - %s\n", a, b);
	strcpy(c, d);
	printf("%s - %s\n", c, d);
	ft_strcpy(a, b);
	printf("%s - %s\n", a, b);
	return (0);
}*/

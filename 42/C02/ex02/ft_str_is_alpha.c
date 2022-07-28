/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:28:56 by masantia          #+#    #+#             */
/*   Updated: 2022/07/28 15:30:53 by masantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}		
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	printf ("%d\n", ft_str_is_alpha("wheruhr"));
	printf ("%d\n", ft_str_is_alpha("dfeww9843j"));
	printf ("%d\n", ft_str_is_alpha(""));
}*/

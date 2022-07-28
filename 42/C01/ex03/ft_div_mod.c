/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:04:10 by masantia          #+#    #+#             */
/*   Updated: 2022/07/23 19:32:40 by masantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;	
	int	*div;
	int	*mod;

	a = 35;
	b = 2;
	div = &c;
	mod = &d;
	ft_div_mod (a, b, div, mod);
	printf ("%d\n", c);
	printf ("%d\n", d);
	return (0);
}*/

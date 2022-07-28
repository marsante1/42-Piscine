/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:09:40 by masantia          #+#    #+#             */
/*   Updated: 2022/07/23 19:33:46 by masantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = (*a) / (*b);
	*b = (*a) % (*b);
	*a = c;
}

/*int	main(void)
{
	int	i;
	int	j;
	int	*p_i;
	int	*p_j;

	i = 35;
	j = 2;
	p_i = &i;
	p_j = &j;
	ft_ultimate_div_mod(p_i, p_j);
	printf ("%d\n", i);
	printf ("%d\n", j);
	return (0);
}*/

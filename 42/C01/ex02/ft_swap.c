/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:04:26 by masantia          #+#    #+#             */
/*   Updated: 2022/07/23 19:32:21 by masantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;	

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 4;
	b = 2;
	ptr_a = &a;
	ptr_b = &b;
	printf ("%d\n", a);
	printf ("%d\n", b);
	ft_swap(ptr_a, ptr_b);
	printf ("%d\n", a);
	printf ("%d\n", b);
	return (0);
}*/

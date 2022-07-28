/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:38:00 by masantia          #+#    #+#             */
/*   Updated: 2022/07/23 19:57:09 by masantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size -1) - i] = aux;
		i++;
	}
}

/*int main (void)
{
	int a[4] = {1, 2, 3, 4};
	printf ("%d - %d - %d _ %d\n", a[0], a[1], a[2], a[3]);
	ft_rev_int_tab(a, 4);
	printf ("%d - %d - %d _ %d\n", a[0], a[1], a[2], a[3]);
	return (0);
}*/

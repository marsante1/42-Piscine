/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jqueirog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:58:34 by jqueirog          #+#    #+#             */
/*   Updated: 2022/07/10 15:58:38 by jqueirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SALTO '\n'
#define A 'A'
#define B 'B'
#define C 'C'
#define BLANK ' '

void				ft_putchar(char c);
void				loops(int a, int b);
void				ft_print_line(int i, int j, int a, int b);

void	rush(int a, int b)
{
	if (a > 0 && b > 0)
	{
		loops(a, b);
	}
}

void	loops(int a, int b)
{
	int	i;
	int	j;

	j = 1;
	while (j <= b)
	{
		i = 1;
		while (i <= a)
		{
			ft_print_line(i, j, a, b);
			i++;
		}
		ft_putchar(SALTO);
		j++;
	}
}

void	ft_print_line(int i, int j, int a, int b)
{
	if ((i == 1) && (j == 1 || j == b))
	{
		ft_putchar(A);
	}
	else if ((i == a) && (j == 1 || j == b))
	{
		ft_putchar(C);
	}
	else if ((i > 1 || i < a) && (j == 1 || j == b))
	{
		ft_putchar(B);
	}
	else if ((i == 1 || i == a) && (j > 1 || j < b))
	{
		ft_putchar(B);
	}
	else if ((i > 1 || i < a) && (j > 1 || j < b))
	{
		ft_putchar(BLANK);
	}
}

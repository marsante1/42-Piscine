/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jqueirog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:04:31 by jqueirog          #+#    #+#             */
/*   Updated: 2022/07/10 19:16:34 by csaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SALTO '\n'
#define B 'B'
#define DG1 'A'
#define DG2 'C'
#define BLANK ' '

void				ft_putchar(char c);

void				loops(int a, int b);

void				ft_print_line(int cnt_i, int cnt_j, int a, int b);

void	rush(int a, int b)
{
	if (a > 0 && b > 0)
	{
		loops(a, b);
	}
}

void	loops(int a, int b)
{
	int	cnt_i;
	int	cnt_j;

	cnt_j = 1;
	while (cnt_j <= b)
	{
		cnt_i = 1;
		while (cnt_i <= a)
		{
			ft_print_line(cnt_i, cnt_j, a, b);
			cnt_i++;
		}
		ft_putchar(SALTO);
		cnt_j++;
	}
}

void	ft_print_line(int cnt_i, int cnt_j, int a, int b)
{
	if ((cnt_i > 1 && cnt_i < a) && (cnt_j > 1 && cnt_j < b))
	{
		ft_putchar(BLANK);
	}
	else if (((cnt_i > 1 && cnt_i < a) && (cnt_j == 1 || cnt_j == b))
		|| ((cnt_j > 1 && cnt_j < b) && (cnt_i == 1 || cnt_i == a)))
	{
		ft_putchar(B);
	}
	else if ((cnt_i == a && cnt_j == b) || (cnt_i == 1 && cnt_j == 1))
	{
		ft_putchar(DG1);
	}
	else
	{
		ft_putchar(DG2);
	}
}

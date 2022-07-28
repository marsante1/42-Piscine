/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:54:06 by masantia          #+#    #+#             */
/*   Updated: 2022/07/18 17:13:12 by masantia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print(int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print (a, b);
			b++;
		}
		a++;
	}
}

void	ft_print(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = a / 10 + '0';
	a2 = a % 10 + '0';
	b1 = b / 10 + '0';
	b2 = b % 10 + '0';
	write (1, &a1, 1);
	write (1, &a2, 1);
	write (1, " ", 1);
	write (1, &b1, 1);
	write (1, &b2, 1);
	if (a != 98)
	{
		write (1, ", ", 2);
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/

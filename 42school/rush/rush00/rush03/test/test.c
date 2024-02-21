/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:11:02 by aserhan           #+#    #+#             */
/*   Updated: 2024/01/28 15:01:44 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	make_fi_la(int x, int y)
{
	int	count;

	count = 1;
	ft_putchar('A');
	while (count <= (x - 2))
	{
		ft_putchar('B');
	}
	if (y != 1)
	{
		ft_putchar('C');
	}
}

void	make_center(int x, int y)
{
	int	count;

	count = 1;
	ft_putchar('B');
	while (count <= (x - 2))
	{
		ft_putchar(' ');
	}
	if (x != 1)
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	make_fi_la(x, y);
	if ((y != 1) && (y != 2))
	{
		make_center(x, y);
	}
	if (y != 1 && x != 1)
	{
		make_fi_la(x, y);
	}
}

int	main(void)
{
	rush (1, 3);
	return ('0');
}

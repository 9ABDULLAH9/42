/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:02:13 by aserhan           #+#    #+#             */
/*   Updated: 2024/01/28 15:17:57 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	write_center(int x)
{
	int	count3;

	count3 = 1;
	ft_putchar('B');
	while (count3 <= (x - 2))
	{
		ft_putchar(' ');
		count3++;
	}
	if (x != 1)
	{
		ft_putchar('B');
	}
}

void	ft_column(int count_row, int y, int x)
{
	int	count2;

	if (count_row == 1 || count_row == y)
	{
		count2 = 1;
		ft_putchar('A');
		while (count2 <= (x - 2))
		{
			ft_putchar('B');
			count2++;
		}
		if (x != 1)
		{
			ft_putchar('C');
		}
	}
	else
	{
		write_center(x);
	}
}

void	rush(int x, int y)
{
	int	count_row;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error", 5);
	}
	else
	{
		count_row = 1;
		while (count_row <= y)
		{
			ft_column(count_row, y, x);
			ft_putchar('\n');
			count_row++;
		}
	}
}

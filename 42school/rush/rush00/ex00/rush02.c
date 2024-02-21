/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:22:55 by aserhan           #+#    #+#             */
/*   Updated: 2024/01/28 15:17:53 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	center_row( int x)
{
	int	count2;

	ft_putchar('B');
	count2 = 1;
	while (count2 <= (x - 2))
	{
		ft_putchar(' ');
		count2++;
	}
	if (x != 1)
	{
		ft_putchar('B');
	}
}

void	first_r(int x)
{
	int	coun1;

	ft_putchar('A');
	coun1 = 1;
	while (coun1 <= (x - 2))
	{
		ft_putchar('B');
		coun1++;
	}
	if (x != 1)
	{
		ft_putchar('A');
	}
}

void	last_r(int x)
{
	int	coun1;

	ft_putchar('C');
	coun1 = 1;
	while (coun1 <= (x - 2))
	{
		ft_putchar('B');
		coun1++;
	}
	if (x != 1)
	{
		ft_putchar('C');
	}
}

void	write_colum(int count_row, int x, int y)
{
	if (count_row == 1)
	{
		first_r(x);
	}
	else if (count_row == y)
	{
		last_r(x);
	}
	else
	{
		center_row(x);
	}
}

void	rush(int x, int y)
{
	int	count_row;

	count_row = 1;
	while (count_row <= y)
	{
		write_colum(count_row, x, y);
		ft_putchar('\n');
		count_row++;
	}
}

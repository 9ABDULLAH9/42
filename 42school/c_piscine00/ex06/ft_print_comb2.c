/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 02:02:11 by aserhan           #+#    #+#             */
/*   Updated: 2024/01/28 17:17:53 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int nb, int nb2)
{
	ft_putchar (48 + (nb / 10));
	ft_putchar (48 + (nb % 10));
	ft_putchar(' ');
	ft_putchar (48 + (nb2 / 10));
	ft_putchar (48 + (nb2 % 10));
	if (nb != 98)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	count1;
	int	count2;

	count1 = 0;
	while (count1 <= 98)
	{
		count2 = count1 + 1;
		while (count2 <= 99)
		{
			ft_write(count1, count2);
			count2++;
		}
		count1++;
	}
}

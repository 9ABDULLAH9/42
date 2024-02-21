/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 03:38:39 by aserhan           #+#    #+#             */
/*   Updated: 2024/01/26 05:13:22 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_out(char a, char b, char c)
{
	if (a != b && a != c && b != c && a < b && b < c && a < c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	count1;
	char	count2;
	char	count3;

	count1 = '0';
	while (count1 <= '9')
	{
		count2 = '0';
		while (count2 <= '9')
		{
			count3 = '0';
			while (count3 <= '9')
			{
				if (count1 <= '9' && count2 <= '9' && count3 <= '9')
				{
					write_out(count1, count2, count3);
				}
				count3++;
			}
			count2++;
		}
		count1++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

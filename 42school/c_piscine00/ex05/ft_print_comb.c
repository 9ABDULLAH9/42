/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 07:28:57 by aserhan           #+#    #+#             */
/*   Updated: 2024/01/30 02:20:46 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_out_code(int a, int b, int c)
{
	char	pr_out;

	pr_out = a + 48;
	write(1, &pr_out, 1);
	pr_out = b + 48;
	write(1, &pr_out, 1);
	pr_out = c + 48;
	write(1, &pr_out, 1);
	if (!(a == 7 && b == 8 && c == 9))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	count1;
	int	count2;
	int	count3;

	count1 = 0;
	while (count1 <= 7)
	{
		count2 = count1 + 1;
		while (count2 <= 8)
		{
			count3 = count2 + 1;
			while (count3 <= 9)
			{
				write_out_code(count1, count2, count3);
				count3++;
			}
			count2++;
		}
		count1++;
	}
}

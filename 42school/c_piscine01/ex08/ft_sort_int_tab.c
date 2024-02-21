/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:56:50 by aserhan           #+#    #+#             */
/*   Updated: 2024/01/31 18:13:58 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count1;
	int	count2;
	int	temp;

	count1 = 1;
	while (count1 <= size)
	{
		count2 = 0;
		while (count2 <= (size -2))
		{
			if (tab[count2] > tab[count2 + 1])
			{
				temp = tab[count2];
				tab[count2] = tab[count2 + 1];
				tab [count2 + 1] = temp;
			}
			count2++;
		}
		count1++;
	}
}

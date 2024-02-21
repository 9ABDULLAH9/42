/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:47:17 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/14 18:21:41 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range[0] = (int *)malloc(sizeof(int) * (max - min));
	if (range[0] == NULL)
		return (0);
	while (i < max - min)
	{
		range[0][i] = min + i;
		i++;
	}
	return (max - min);
}

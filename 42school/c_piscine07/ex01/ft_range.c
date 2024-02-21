/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:47:17 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/14 18:21:19 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*list;
	int	i;

	if (min >= max)
		return (0);
	list = (int *)malloc(sizeof(int) * (max - min));
	if (list == NULL)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		list[i] = min + i;
		i++;
	}
	return (list);
}

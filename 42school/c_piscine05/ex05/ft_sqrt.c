/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:19:37 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/14 16:29:18 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while ((i <= nb / i) && (i < 46340))
	{
		if(i == nb /i)
			return (i);
		i++;
	}
	return (0);
}

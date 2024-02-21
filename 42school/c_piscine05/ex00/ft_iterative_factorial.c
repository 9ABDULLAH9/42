/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:50:58 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/12 15:06:59 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	final;

	i = 1;
	final = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		final = final * i;
		i++;
	}
	return (final);
}

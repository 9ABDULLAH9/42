/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:38:39 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/12 18:09:24 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	countn;
	int	final;
	int	sign;

	i = 0;
	countn = 0;
	final = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
	{
		if (str[i] == 45)
			countn++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		final *= 10;
		final += str[i] - 48;
		i++;
	}
	if ((countn % 2) != 0)
		sign = -1;
	return (final * sign);
}

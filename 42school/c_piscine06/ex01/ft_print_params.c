/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:48:17 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/11 12:06:47 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	i;
	int	count;

	count = 1;
	while (argv[count] && count <= argc)
	{
		i = 0;
		while (argv[count][i])
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		write(1, &"\n"[0], 1);
		count++;
	}
	return (0);
}

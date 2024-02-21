/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:05:39 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/11 16:05:26 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int ac, char **str)
{
	int	i;
	int	count;

	count = 1;
	while (count < ac)
	{
		i = 0;
		while (str[count][i] != '\0')
		{
			write(1, &str[count][i], 1);
			i++;
		}
		write(1, &"\n"[0], 1);
		count++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_param(int ac, char **av)
{
	int	count1;
	int	count2;

	count1 = 1;
	while (count1 < ac - 1)
	{
		count2 = 1;
		while (count2 < ac - count1)
		{
			if (ft_strcmp(av[count2], av[count2 + 1]) > 0)
			{
				ft_swap(&av[count2], &av[count2 + 1]);
			}
			count2++;
		}
		count1++;
	}
}

int	main(int argc, char *argv[])
{
	ft_sort_param(argc, argv);
	ft_putstr(argc, argv);
	return (0);
}

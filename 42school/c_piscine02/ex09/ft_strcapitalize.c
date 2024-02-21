/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:53:36 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/06 17:16:54 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_c_is_alpha(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		return (1);
	else
		if (str >= 48 && str <= 57)
			return (1);
	return (0);
}

void	ft_doit(int i, int is_now, char *str)
{
	while (str[i])
	{
		if (!(ft_c_is_alpha(str[i])))
		{
			i++;
			is_now = 1;
		}
		else
		{
			if (is_now)
			{
				if ((str[i] >= 97 && str[i] <= 122))
					str[i] -= 32;
				is_now = 0;
			}
			else
			{
				if ((str[i] >= 65 && str[i] <= 90))
					str[i] += 32;
			}
			i++;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_now;

	i = 0;
	is_now = 1;
	ft_doit(i, is_now, str);
	return (str);
}

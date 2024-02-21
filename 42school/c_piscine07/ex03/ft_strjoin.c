/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:28:00 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/14 18:29:12 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	count;
	int	len;
	int	a;

	i = 0;
	count = 0;
	a = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][count])
		{
			len++;
			count++;
		}
		i++;
	}
	while (sep[a])
		a++;
	len += (a * (size - 1));
	return (len);
}

void	ft_sep(char *sep, char *final, int *a)
{
	int	se;

	se = 0;
	while (sep[se])
	{
		final[*a] = sep[se];
		se++;
		*a = *a + 1;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		count;
	int		a;
	char	*final;

	len = ft_len(size, strs, sep);
	final = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	a = 0;
	while (i < size)
	{
		count = 0;
		while (strs[i][count])
		{
			final[a] = strs[i][count];
			a++;
			count++;
		}
		if (i + 1 < size)
			ft_sep(sep, final, &a);
		i++;
	}
	final[a] = '\0';
	return (final);
}

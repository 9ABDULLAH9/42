/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:42:31 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/12 18:07:26 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count2;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	count2 = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[count2] != '\0' && i < size - 1)
	{
		dest[i] = src[count2];
		i++;
		count2++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:44:49 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/15 15:44:27 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef ft_m
#define ft_m
void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);
#endif ft_m

typedef enum s_bool
{
	false = 0,
	true = 1
} t_bool;


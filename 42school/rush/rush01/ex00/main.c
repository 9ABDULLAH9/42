/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserhan <aserhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:31:41 by aserhan           #+#    #+#             */
/*   Updated: 2024/02/11 10:17:07 by aserhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void determine_pair(char input_array[16], int is_row, int array_index, char *first, char *last)
{
	int	i;
	
	if (is_row == 1)
		i = 8;
	else
		i = 0;
	i += array_index;
	*first = input_array[i];
	*last = input_array[i + 4];
}

int validate(char permutation[4] , char left, char right)
{
	int	i;
	char max;
	char	is_first_valid;
	char	is_last_valid;

	i = 0;
	max = 0;
	is_first_valid = '0';
	is_last_valid = '0';
	while (i < 4)
	{
		if (max < permutation[i])
		{
			is_first_valid++;
			max = permutation[i];
		}
		i++;
	}
	i = 3;
	max = 0;
	while (i >= 0)
	{
		if (max < permutation[i])
		{
			is_last_valid++;
			max = permutation[i];
		}
		i--;
	}
	if (is_first_valid == left && is_last_valid == right)
		return (1);
	return (0);	
}

int	check_previous(char current_array[4], char previous_array[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (current_array[i] == previous_array[i])
			return (0);
		i++;
	}
	return (1);
}
/*
void skyscraper_game(char input_array[16])
{
	char	all_possible_iterations[24][4];
	int	row_index;
	int solution[4];
	int check_index;

	char first;
	char last;

	all_possible_iterations[24][4] = {"1234", "1243", "1324", "1342", "1423", "1432",
		"2134", "2143", "2314", "2341", "2413", "2431",
		"3124", "3142", "3214", "3241", "3412", "3421",
		"4123", "4132", "4213", "4231", "4312", "4321"};

	solution[4] = {0, 0, 0, 0};
	row_index = 0;

	while(row_index < 4)
	{
		while(solution[row_index] < 24)
		{

			determine_pair(input_array, 1, row_index, &first, &last);
			if (validate(all_possible_iterations[solution[row_index]], first, last))
			{
				row_index++;
				break;
			}
			else{
				solution[row_index]++;
			}
		}
	}

	printf("%s", all_possible_iterations[solution[0]]);
	printf("%s", all_possible_iterations[solution[1]]);
	printf("%s", all_possible_iterations[solution[2]]);
	printf("%s", all_possible_iterations[solution[3]]);
}

int main()
{
		char input_array[16] = "3212123232312312";
		
		skyscraper_game(input_array);
}
*/
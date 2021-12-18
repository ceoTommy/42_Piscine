/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rush01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:23:26 by tford             #+#    #+#             */
/*   Updated: 2021/12/05 19:13:56 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	display_values(int values[4][4]);
void	string_to_matrix(char *str, int clues[4][4]);

int		errchk(char *input);
int		size_check(int input[4][4]);
int		cmpchck(int input[4][4]);

void	assign_values_topbot(int clues[4][4], int values[4][4], int x, int y);
void 	assign_values_lftrit(int clues[4][4], int values[4][4], int x, int y);
void	assign_values(int clues[4][4], int values[4][4]);

int main(int arg, char **str)
{
	int values[4][4] = {
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0}};

	int clues[4][4];
	int	i;

	string_to_matrix(str[1], clues);

	i = arg;
	i = errchk(str[1]);
	i += size_check(clues);
	i += cmpchck(clues);

	if (i >= 1)
	{
		return (0);
	}

	assign_values(clues, values);
	display_values(values);
}

//working: asigns a string of numeric characters
//eg. "1 2 3 4" to a 4*4 array (disreguards spaces between numbers)
void string_to_matrix(char *str, int clues[4][4])
{
	int	y;
	int x;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			clues[y][x] = *str - '0';
			str += 2;
			x++;
		}
		y++;
	}
}

//working: displays 4x4 matrix as box
void display_values(int values[4][4])
{
	int x = 0;
	int y = 0;
	char c;

	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			c = values[y][x] + '0';
			printf(" %c", c);
			x++;
		}
		printf("\n");
		y++;
	}
	printf("\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asign.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:33:40 by tford             #+#    #+#             */
/*   Updated: 2021/12/05 18:35:04 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	assign_values_topbot(int clues[4][4], int values[4][4], int x, int y);
void 	assign_values_lftrit(int clues[4][4], int values[4][4], int x, int y);

//partially working: loops though clues matrix assigning to values
void	assign_values(int clues[4][4], int values[4][4])
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (y <= 1)
				assign_values_topbot(clues, values, x, y);
			else
				assign_values_lftrit(clues, values, x, y);
			x++;
		}
		y++;
	}
}

//partially working: assigns values taking a top or bottom clue
void assign_values_topbot(int clues[4][4], int values[4][4], int x, int y)
{
	if (clues[y][x] == 1)
	{
		values[y * 3][x] = 4;
	}
	else if (clues[y][x] == 4)
	{
		if (y == 0)
		{
			values[0][x] = 1;
			values[1][x] = 2;
			values[2][x] = 3;
			values[3][x] = 4;
		}
		else if (y == 1) 
		{
			values[3][x] = 1;
			values[2][x] = 2;
			values[1][x] = 3;
			values[0][x] = 4;
		}
	}
}

//partially working: assigns values taking a left or right clue
void	assign_values_lftrit(int clues[4][4], int values[4][4], int x, int y)
{
	if (clues[y][x] == 1)
	{
		values[x][(y - 2) * 3] = 4;
	}	
	else if (clues[y][x] == 4)
	{
		if (y == 2)
		{
			values[x][0] = 1;
			values[x][1] = 2;
			values[x][2] = 3;
			values[x][3] = 4;
		}
		else if (y == 3)
		{
			values[x][3] = 1;
			values[x][2] = 2;
			values[x][1] = 3;
			values[x][0] = 4;
		}
	}
}

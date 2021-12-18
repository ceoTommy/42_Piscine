#include <unistd.h>
#include <stdio.h>

void	errwrt(void)
{
	write(1, "Error", 5);
}

//checks the compatability of
//certain number combinations
int cmpchck(int input[4][4])
{
	int	y;

	y = 0;
	while(y < 4)
	{
		if (input[0][y] == 1 && input[1][y] == 1)
		{
			errwrt();
			return (1);
		}
		y++;
	}
	y = 0;
	while(y < 4)
	{
		if (input[2][y] == 1 && input[3][y] == 1)
		{
			errwrt();
			return (1);
		}
		y++;
	}
	return (0);
}

//checks to see if the combined sum of
//the columns or rows is greater than 5
int	size_check(int input[4][4])
{
	int	y;

	y = 0;
	while(y < 4)
	{
		if ((input[0][y] + input[1][y])	> 5)
			{
				errwrt();
				return (1);
			}
		y++;
	}
	y = 0;
	while(y < 4)
	{
		if ((input[2][y] + input[3][y])	> 5)
			{
				errwrt();
				return (1);
			}
		y++;
	}
	return (0);
}
//checks that the string only contains numbers
//and is the correct length
int	errchk(char *input)
{
	int	i;
	
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] < '1' || input[i] > '4')
		{
			if (input[i] != 32)
			{
				errwrt();
				return (1);				
			}
		}
		i++;
	}
	if (i != 31)
	{
		errwrt();
		return (1);
	}
	return(0);
}

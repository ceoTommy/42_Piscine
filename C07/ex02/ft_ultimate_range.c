/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:08:50 by tford             #+#    #+#             */
/*   Updated: 2021/12/13 20:44:02 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int main()
{
	int	*int_arr;

	int max = 50;
	printf("%d\n\n", ft_ultimate_range(&int_arr, 10, max));
	//printf("%p", int_arr);
	while (*int_arr != max - 1)
	{
		printf(" %d ", *int_arr++);
	}
	printf(" %d ", *int_arr++);
	printf("  %d", *int_arr);
}
*/

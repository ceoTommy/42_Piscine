/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:34:29 by tford             #+#    #+#             */
/*   Updated: 2021/12/13 20:07:49 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*ptr;

	if (min >= max)
		return (NULL);
	size = max - min;
	ptr = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
		ptr[i++] = min++;
	return (ptr);
}

/*
#include <unistd.h>

int main()
{
	int	*int_arr;

	int max = 12;
	int_arr = ft_range(10, max);
	while (*int_arr != max - 1)
	{
		printf(" %d ", *int_arr++);
	}
	printf(" %d", *int_arr++);
	printf("  %d", *int_arr);
}
*/

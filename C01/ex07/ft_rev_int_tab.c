/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:47:24 by tford             #+#    #+#             */
/*   Updated: 2021/11/30 10:41:32 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*a;
	int	*b;

	i = 0;
	while (i < (size / 2))
	{
		a = &tab[i];
		b = &tab[size - i -1];
		ft_swap(a, b);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[4] = {23, 53, -10, 2041};

	while (i < 4)
	{
		printf("%d,", arr[i]);
		i++;
	}

	printf("\n");
	ft_rev_int_tab(arr, 4);

	i = 0;
	while (i < 4)
	{
		printf("%d,", arr[i]);
		i++;
	}
}*/

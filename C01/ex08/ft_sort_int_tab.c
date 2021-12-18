/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:42:19 by tford             #+#    #+#             */
/*   Updated: 2021/11/30 11:20:47 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && tab[j] < tab[j - 1])
		{
			ft_swap(&tab[j], &tab[j -1]);
			j--;
		}
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
    int arr[11] = {23, 82, -182, 28, 9210, 1, 0, -4, 91, -3, 0};

    while (i < 11)
    {
        printf("%d,", arr[i]);
        i++;
    }

    printf("\n");
    ft_sort_int_tab(arr, 11);

    i = 0;
    while (i < 11)
    {
        printf("%d,", arr[i]);
        i++;
    }
}*/

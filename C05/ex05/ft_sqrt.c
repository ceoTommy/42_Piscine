/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:18:33 by tford             #+#    #+#             */
/*   Updated: 2021/12/13 15:58:28 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
		if (n == 46341)
			return (0);
	}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d, ", ft_sqrt(2147483647));
	printf("%d, ", ft_sqrt(46340 * 46340 + 1));
	printf("%d, ", ft_sqrt(46341 * 46340));
	printf("%d, ", ft_sqrt(16));
	printf("%d, ", ft_sqrt(17));
	printf("%d", ft_sqrt(15));
}
*/

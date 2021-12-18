/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:28:20 by tford             #+#    #+#             */
/*   Updated: 2021/12/13 14:56:11 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	output;

	output = nb;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	while (--power)
	{
		output *= nb;
	}
	return (output);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 5));
	printf("%d\n", ft_iterative_power(5, 5));
	printf("%d\n", ft_iterative_power(-5, 5));
	printf("%d\n", ft_iterative_power(-5, 4));
	printf("%d\n", ft_iterative_power(-5, -2));
	printf("%d\n", ft_iterative_power(5, -4));
}
*/

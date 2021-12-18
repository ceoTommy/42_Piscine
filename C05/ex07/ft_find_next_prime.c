/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:26:21 by tford             #+#    #+#             */
/*   Updated: 2021/12/13 16:29:58 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	nb--;
	if (nb < 0)
		return (2);
	while (++nb <= 2147483647)
	{
		is_prime = 0;
		i = 3;
		if (nb == 2)
			continue ;
		if (nb % 2 == 0)
			continue ;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				break ;
			is_prime = 1;
			i++;
		}
		if (is_prime)
			return (nb);
	}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	int	nb = -1000;

	printf("%d", ft_find_next_prime(2147483647));

	while (nb < 10000)
	{
		printf("%d next prime is %d\n", nb, ft_find_next_prime(nb));
		nb++;
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:53:01 by tford             #+#    #+#             */
/*   Updated: 2021/12/13 14:58:51 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	else
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(0, 5));	
	printf("%d\n", ft_recursive_power(-5, 5));	
	printf("%d\n", ft_recursive_power(-5, 4));
	printf("%d\n", ft_recursive_power(3, -2));
	printf("%d\n", ft_recursive_power(-5, 10));
	printf("%d\n", ft_recursive_power(-5, 5));
}
*/

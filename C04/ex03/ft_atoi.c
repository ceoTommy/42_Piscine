/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:13:40 by tford             #+#    #+#             */
/*   Updated: 2021/12/08 13:40:19 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	minus_counter;
	int	nb;

	minus_counter = 0;
	i = 0;
	nb = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_counter++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (minus_counter % 2 == 1)
		nb *= -1;
	return (nb);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main()
{
	printf("%d", ft_atoi("  		 	++-----++--1827bDI"));
}
*/

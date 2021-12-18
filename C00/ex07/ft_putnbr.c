/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 07:21:49 by tford             #+#    #+#             */
/*   Updated: 2021/11/29 12:09:06 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int(int nb, int n_digits);

void	ft_putnbr(int nb)
{
	int	i;
	int	n_digits;

	if (nb == 0)
	{
		i = 1;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		i = nb;
	}
	else
	{
		i = nb;
	}
	n_digits = 0;
	while (i != 0)
	{
		i = i / 10;
		n_digits++;
	}
	print_int(nb, n_digits);
}

void	print_int(int nb, int n_digits)
{
	char	c[10];
	int		i;

	i = 0;
	while (i < n_digits)
	{
		c[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	n_digits = n_digits - 1;
	while (n_digits >= 0)
	{
		write(1, &c[n_digits], 1);
		n_digits--;
	}
}

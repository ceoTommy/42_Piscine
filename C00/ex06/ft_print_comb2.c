/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:33:59 by tford             #+#    #+#             */
/*   Updated: 2021/11/29 11:48:11 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	write_two_digit(int num);
void	write_number(int num_b, int num_a);

void	ft_print_comb2(void)
{
	int	num_a;
	int	num_b;

	num_b = 0;
	while (num_b <= 97)
	{
		num_a = num_b + 1;
		while (num_a <= 99)
		{
			write_number(num_b, num_a);
			write(1, ", ", 2);
			num_a++;
		}
		num_b++;
	}
	write_number(98, 99);
}

void	write_number(int num_b, int num_a)
{
	write_two_digit(num_b);
	write(1, " ", 1);
	write_two_digit(num_a);
}

void	write_two_digit(int num)
{
	char	sml;
	char	lrg;

	sml = num % 10 + '0';
	lrg = num / 10 + '0';
	write(1, &lrg, 1);
	write(1, &sml, 1);
}

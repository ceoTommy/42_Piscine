/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:33:59 by tford             #+#    #+#             */
/*   Updated: 2021/11/29 11:40:28 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '7')
	{	
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				write(1, &digits[0], 1);
				write(1, &digits[1], 1);
				write(1, &digits[2], 1);
				if (digits[0] < '7')
				{
					write(1, ", ", 2);
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}

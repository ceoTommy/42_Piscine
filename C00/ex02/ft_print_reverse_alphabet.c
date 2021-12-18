/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:42:51 by tford             #+#    #+#             */
/*   Updated: 2021/11/29 10:48:42 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	start_char;
	char	end_char;

	start_char = 'z';
	end_char = 'a';
	while (start_char >= end_char)
	{
		write(1, &start_char, 1);
		start_char--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:10:23 by tford             #+#    #+#             */
/*   Updated: 2021/11/29 10:48:17 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start_char;
	char	end_char;

	start_char = 'a';
	end_char = 'z';
	while (start_char <= end_char)
	{
		write(1, &start_char, 1);
		start_char++;
	}
}

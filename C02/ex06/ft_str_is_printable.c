/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:30:28 by tford             #+#    #+#             */
/*   Updated: 2021/12/02 16:57:52 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 31 || *str == 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int main ()
{
	char string[3];

	string[0] = 21;
	string[1] = 'a';
	string[2] = 31;
	printf("%c: %d\n", string[2], ft_str_is_printable(string));
	char stringb[] = "shdaAks";
	printf("%s: %d\n", stringb, ft_str_is_printable(stringb));
}
*/

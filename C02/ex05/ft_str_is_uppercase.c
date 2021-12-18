/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:30:28 by tford             #+#    #+#             */
/*   Updated: 2021/12/02 16:48:16 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
#include <stdio.h>
int main ()
{
	char string[] = "dlaksdm";
	printf("%s: %d\n", string, ft_str_is_uppercase(string));
	char stringb[] = "HELLO";
	printf("%s: %d\n", stringb, ft_str_is_uppercase(stringb));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:30:28 by tford             #+#    #+#             */
/*   Updated: 2021/11/30 14:13:59 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
	printf("%s: %d\n", string, ft_str_is_lowercase(string));
	char stringb[] = "shdaAks";
	printf("%s: %d\n", stringb, ft_str_is_lowercase(stringb));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:30:28 by tford             #+#    #+#             */
/*   Updated: 2021/11/30 14:01:32 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
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
	char string[] = "jshafdfg";
	printf("%s: %d\n", string, ft_str_is_numeric(string));
	char stringb[] = "01920";
	printf("%s: %d\n", stringb, ft_str_is_numeric(stringb));
}
*/

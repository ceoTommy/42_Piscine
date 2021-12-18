/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:30:28 by tford             #+#    #+#             */
/*   Updated: 2021/12/02 16:40:42 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
	char string[] = "jsADJdfg";
	printf("%s: %d\n", string, ft_str_is_alpha(string));
	char stringb[] = "asjfAS01920";
	printf("%s: %d\n", stringb, ft_str_is_alpha(stringb));
}*/

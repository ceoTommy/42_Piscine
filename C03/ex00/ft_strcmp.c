/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:38:35 by tford             #+#    #+#             */
/*   Updated: 2021/12/01 19:29:40 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			return (-1);
		}
		else
			i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{	
	char a[] = "abc";
	char b[] = "abcdjsj";

	printf("%d", ft_strcmp(a, b));
}*/

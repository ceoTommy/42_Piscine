/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:05:11 by tford             #+#    #+#             */
/*   Updated: 2021/12/13 19:33:47 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_cpy;

	i = 0;
	str_cpy = (char *)malloc(sizeof(char) * (str_len(src) + 1));
	while (src[i])
	{
		str_cpy[i] = src[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}

/*
#include <stdio.h>
int main()
{
	printf("%s", ft_strdup("hello there!"));
}
*/

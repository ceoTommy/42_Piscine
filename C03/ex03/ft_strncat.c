/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:00:14 by tford             #+#    #+#             */
/*   Updated: 2021/12/07 17:00:34 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	char destString[50] = "hello";
	char srcString[50] = "and goodbye";

	printf("%s\n", destString);
	printf("%s\n", ft_strncat(destString, srcString, 8));
	printf("%s", destString);
}
*/

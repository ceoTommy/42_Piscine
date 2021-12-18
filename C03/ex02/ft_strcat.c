/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:00:14 by tford             #+#    #+#             */
/*   Updated: 2021/12/07 18:11:22 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (*src)
	{
		dest[i++] = *src;
		src++;
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
	printf("%s\n", ft_strcat(destString, srcString));
	printf("%s", destString);
}
*/

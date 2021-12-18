/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:37:55 by tford             #+#    #+#             */
/*   Updated: 2021/12/07 18:10:45 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
			{
				return (str);
			}
			i++;
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char *str = "hello needle sakjdnaskdjakd";
	char *str2 = "needle";
	printf("%s", ft_strstr(str, str2));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:27:54 by tford             #+#    #+#             */
/*   Updated: 2021/12/02 17:19:15 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	try_capitalize(char *c);
int		is_alphanumeric(char c);
void	try_uncapitalize(char *c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	try_capitalize(str);
	while (str[i] != 0)
	{
		if (!is_alphanumeric(str[i - 1]))
		{
			try_capitalize(str + i);
		}
		else
			try_uncapitalize(str + i);
		i++;
	}
	return (str);
}

void	try_capitalize(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 'a' - 'A';
	}
}

void	try_uncapitalize(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c += 'a' - 'A';
	}
}

int	is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char string[] = "salut, comment tu vas ? 42mots quarTAte-deux; cinquante+et+un";
	printf("%s\n", string);
	printf("%s\n", ft_strcapitalize(string));
	printf("%s\n", string);

}
*/

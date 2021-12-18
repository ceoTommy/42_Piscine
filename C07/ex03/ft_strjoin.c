/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:45:08 by tford             #+#    #+#             */
/*   Updated: 2021/12/15 12:29:08 by tford            ###   ########.fr       */
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

void	fill_joined_str(char *fill_str, char **strs, char *sep, int size)
{
	int	i;
	int	word;
	int	j;
	int	a;

	a = 0;
	i = 0;
	word = 0;
	while (i < size)
	{
		j = 0;
		while (strs[word][j])
			fill_str[a++] = strs[word][j++];
		j = 0;
		while (sep[j] && i < (size - 1))
			fill_str[a++] = sep[j++];
		i++;
		word++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*joined_str;
	long int	joined_len;
	int			i;

	i = 0;
	if (size == 0)
	{
		joined_str = (char *)malloc(1 * sizeof(char));
		*joined_str = '\0';
		return (joined_str);
	}
	joined_len = str_len(sep) * (size - 1);
	while (i < size)
	{
		joined_len += str_len(strs[i++]);
	}
	joined_str = (char *)malloc((joined_len + 1) * sizeof(char));
	joined_str[joined_len] = '\0';
	fill_joined_str(joined_str, strs, sep, size);
	return (joined_str);
}

/*
int main()
{
	char *strs[] = { "hello", "and", "goodbye", "you", "creature" };
	int size = 5;
	char *sep = " @ ";
	printf("[%s]\n[%d]\n[%s]", ft_strjoin(size, strs, sep), size, sep);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:52:13 by tford             #+#    #+#             */
/*   Updated: 2021/12/18 15:27:19 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_dup(char *src)
{
	int 	i;
	int		len;
	char	*dest;

	i = 0;
	len = str_len(src);
	dest = (char *) malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *stock_str;
	
	stock_str = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	
	stock_str[ac].str = NULL;
	while (--ac)
	{
		stock_str[ac].size = sizeof(av[ac]);
		stock_str[ac].str = av[ac];
		stock_str[ac].copy = str_dup(av[ac]);
	}
	return (stock_str);
}

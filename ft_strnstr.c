/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:43:53 by mapale            #+#    #+#             */
/*   Updated: 2023/11/08 14:14:26 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	int res;

	i = 0;
	res = 0;
	if (little[0] == '\0')
		return (big);
	while (i < len)
	{
		j = 0;
		res = i;
		while (little[j] && big[i] == little[j] && i < len)
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return(big + res);
		i++;
	}
	return (NULL);
}
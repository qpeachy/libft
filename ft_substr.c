/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:29:48 by mapale            #+#    #+#             */
/*   Updated: 2023/11/08 16:37:07 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*tab;

	i = 0;
	tab = (char *)malloc(sizeof(char) * len);
	if (!tab)
		return (NULL);
	while (i <= len)
	{
		tab[i] = s[start];
		start++;
		i++;
	}
	return (tab);
}
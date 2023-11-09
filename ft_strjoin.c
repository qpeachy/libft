/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:37:58 by mapale            #+#    #+#             */
/*   Updated: 2023/11/08 16:43:49 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*tab;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	tab = (char *)malloc(sizeof(char) * size + 1);
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[i])
	{
		tab[i] = s2[j];
		i++;
		j++;
	}
	tab[i] = '\0';
}
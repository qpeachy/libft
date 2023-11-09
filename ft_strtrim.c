/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:52:44 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 17:50:50 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return(1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int 	stop;
	char	*tab;
	int		i;

	start = 0;
	stop = ft_strlen(s1);
	while (inset(s1[start], set))
		start++;
	while (inset(s1[stop], set))
		stop--;
	tab = (char *)malloc(sizeof(char) * (stop - start) + 1);
	if (!tab)
		return (NULL);
	while (start < stop)
	{
		tab[i] = s1[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
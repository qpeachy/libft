/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:48:58 by mapale            #+#    #+#             */
/*   Updated: 2023/11/13 18:28:20 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t		i;

	i = 0;
	tab = malloc(nmemb * size);
	if (!tab || size * nmemb == 65535)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
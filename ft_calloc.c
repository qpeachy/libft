/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:48:58 by mapale            #+#    #+#             */
/*   Updated: 2023/11/08 15:38:13 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char *tab;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	return (tab);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:48:58 by mapale            #+#    #+#             */
/*   Updated: 2023/11/22 14:04:22 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*tab;
	size_t		i;

	i = 0;
	if (size > 0 && nmemb > 2147483647 / size)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}

#include <stdio.h>
#include <string.h>
int main(int ac, char **ar)
{
	(void)ac;
	(void)ar;
	printf("%s\n", (char *)ft_calloc(atoi(ar[1]), atoi(ar[2])));
	return 0;
}
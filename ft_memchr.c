/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:27:41 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 17:33:35 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memchr(const void *s, int c, size_t n)
{
    char	*tmp;
	size_t		i;

    tmp = (char *)s;
    i = 0;
    while(i < n)
    {
        if(tmp[i] == c)
            return(&tmp[i]);
        i++;
    }
    return (NULL);
}
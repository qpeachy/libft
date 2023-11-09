/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:27:41 by mapale            #+#    #+#             */
/*   Updated: 2023/11/08 13:35:54 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memchr(const void *s, int c, size_t n)
{
    char    *tmp;
    int     i;

    tmp = (char *)s;
    i = 0;
    while(tmp[i])
    {
        if(tmp[i] == c)
            return(&s[i]);
        i++;
    }
    return (NULL);
}
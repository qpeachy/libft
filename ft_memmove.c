/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:14:51 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 17:38:26 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *tmp_dest;
    char *tmp_src;
    size_t i;

    tmp_dest = (char *)dest;
    tmp_src = (char *)src;
    i = 0;
    if (src < dest)
    {
        i = n;
        while (i > 0)
        {
            tmp_dest[i] = tmp_src[i];
            i--;
        }
    }
    else
    {
        while (i < n)
        {
            tmp_dest[i] = tmp_src[i];
            i++;
        }
    }
    dest = tmp_dest;
	return (dest);
}
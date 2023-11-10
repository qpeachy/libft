/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:14:51 by mapale            #+#    #+#             */
/*   Updated: 2023/11/10 11:09:19 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *tmp_dest;
    char *tmp_src;
    size_t i;

    tmp_dest = (char *)dest;
    tmp_src = (char *)src;
    if (src < dest)
    {
        i = n;
        while (i > 0)
        {
            tmp_dest[i - 1] = tmp_src[i - 1];
            i--;
        }
    }
    else
    {
		i = 0;
        while (i < n)
        {
            tmp_dest[i] = tmp_src[i];
            i++;
        }
    }
	return (dest);
}
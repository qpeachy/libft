/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:54:55 by mapale            #+#    #+#             */
/*   Updated: 2023/11/08 11:09:27 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    int i;
    int d_size;

    i = 0;
    d_size = ft_strlen(dest);
    while (i < size)
    {
        dest[d_size + i] = src[i];
        i++;
    }
    dest[d_size + i] = '/0';
    return (ft_strlen(src) + ft_strlen(dest));
}

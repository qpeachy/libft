/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:07:15 by mapale            #+#    #+#             */
/*   Updated: 2023/11/08 14:07:30 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    int	i;

    i = 0;
    if (size < 0)
        return (ft_strlen(src));
    while (i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}
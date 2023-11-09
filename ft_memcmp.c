/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:36:48 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 17:36:41 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char	*tmp_s1;
    unsigned char	*tmp_s2;
	size_t			i;

    tmp_s1 = (unsigned char *)s1;
    tmp_s2 = (unsigned char *)s2;
    while(tmp_s1[i] && tmp_s2[i] && i < n)
        i++;
    return (tmp_s1[i] - tmp_s2[i]);
}
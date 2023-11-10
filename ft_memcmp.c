/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:36:48 by mapale            #+#    #+#             */
/*   Updated: 2023/11/10 13:16:31 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char	*tmp_s1;
    unsigned char	*tmp_s2;
	size_t			i;

	i = 0;
    tmp_s1 = (unsigned char *)s1;
    tmp_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
    while(i < n)
    {
		if (tmp_s1[i] != tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
    return (0);
}/* 
#include <string.h>
#include <stdio.h>
int main()
{
	char s[] = {-128, 0, 127, 0};
        char sCpy[] = {-128, 0, 127, 0};
	printf("copy fct: %d\nreal fct: %d\n", ft_memcmp(s, sCpy, 4),memcmp(s, sCpy, 4));
	return 0;
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:42:58 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 17:38:48 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t 	i;
	char 	*temp;

	i = 0;
	temp = (char *)s;
	while (n > 0)
	{
		temp[i] = c;
		i++;
		n--; 
	}

	s = temp;
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:00:14 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 17:29:05 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char *temp;

	temp = (char *)s;
	while (n > 0)
	{
		temp[n - 1] = '\0';
		n--;
	}
	s = temp;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:06:56 by mapale            #+#    #+#             */
/*   Updated: 2023/11/10 17:37:54 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nn;

	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	nn = n;
	if (nn > 10)
		ft_putnbr_fd((nn / 10), fd);
	ft_putchar_fd(((nn % 10) + '0'), fd);
}

/*#include <stdio.h>
int main()
{
	ft_putnbr_fd(10, 1);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:15:41 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 17:28:37 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	result;
	int pole;
	int	i;

	result = 0;
	pole = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\a' && nptr[i] <= '\r'))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			pole *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result + (nptr[i] - '0') * 10;
	}
	return (result * pole);
}
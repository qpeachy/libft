/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:33:14 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 17:09:38 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdio.h>
#include <stdlib.h>

int	count_nbr(int n)
{
	int		count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	rev_tab(char *s)
{
	int 	i;
	int 	j;
	int		size;
	char	tmp;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	size = j;
	j--;
	while (i < size / 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *)malloc(sizeof(char) * count_nbr(n) + 1);
	if (!tab)
		return (NULL);
	if (n < 0)
	{
		tab[i] = '-';
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		tab[i] = n%10 + '0';
		i++;
		n/=10;
	}
	tab[i] = '\0';
	if (tab[0] == '-')
		rev_tab(tab + 1);
	else
		rev_tab(tab);
	return (tab);
}

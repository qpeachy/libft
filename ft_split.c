/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapale <mapale@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:46:04 by mapale            #+#    #+#             */
/*   Updated: 2023/11/09 13:32:31 by mapale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dup(char const *s, int start, int stop)
{
	char	*tab;
	int		i;

	tab = (char *)malloc(sizeof(char) * (stop - start) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (start < stop)
	{
		tab[i] = s[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int	how_many(char const *s, char c)
{
	int	i;
	int	word;
	int	in_word;

	i = 0;
	word = 0;
	in_word = 0;
	while (s[i])
	{
		if (!in_word && s[i] != c)
		{
			in_word = 1;
			word++;
		}
		else if (in_word && s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		start;
	int		stop;
	int 	size;
	int		i;
	int		j;

	i = 0;
	j = -1;
	size = how_many(s, c);
	tab = (char **)malloc(sizeof(char *) * size);
	if(!tab)
		return (NULL);
	while (j++ < size)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c)
			i++;
		stop = i;
		tab[j] = ft_dup(s, start, stop);
		i++;
	}
	return (tab);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int argc, char **argv)
{
	char 	**hoe;
	int		i;

	if (argc != 4)
		return 0;
	hoe = ft_split(argv[1], argv[2][0]);
	i = 0;
	while (i < atoi(argv[3]))
	{
		printf("smd line : %s\n", hoe[i]);
		i++;
	}
	return 0;
} */
/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_split.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/08 17:46:04 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/09 13:32:31 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

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
	//printf("how many: %d\n", word);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		start;
	int 	size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = how_many(s, c);
	tab = (char **)malloc(sizeof(char *) * size);
	if(!tab)
		return (NULL);
	while (j < size)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_substr(s, start, i - start);
		i++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	int		i;

	char **hoes = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	i = 0;
	while (hoes[i])
	{
		printf("smd line : %s - length: %ld\n", hoes[i], strlen(hoes[i]));
		i++;
	}
	return 0;
}  */ 

/*
#include <stdio.h>
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
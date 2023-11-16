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

int	in_set(char c, char set)
{
	if (c == set)
		return (1);
	return (0);
}

void	ft_free(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**fill_tab(char **tab, char const *s, int size, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_substr(s, start, i - start);
		if (!(tab[j]))
		{
			ft_free(tab, size - j);
			return (NULL);
		}
		i++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		size;

	size = how_many(s, c);
	tab = (char **)malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	tab = fill_tab(tab, s, size, c);
	if (!tab)
		return (NULL);
	return (tab);
}

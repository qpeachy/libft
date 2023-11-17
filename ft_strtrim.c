/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strtrim.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/08 16:52:44 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/09 17:50:50 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

static int	inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		stop;
	int		size;
	char	*tab;
	int		i;

	i = 0;
	start = 0;
	stop = ft_strlen(s1);
	size = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && inset(s1[start], set))
		start++;
	while (stop > 0 && inset(s1[stop - 1], set))
		stop--;
	if (stop - start > 0)
		size = stop - start;
	tab = (char *)malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	while (start < stop)
		tab[i++] = s1[start++];
	tab[i] = '\0';
	return (tab);
}

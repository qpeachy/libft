/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_substr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/08 16:29:48 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/13 16:32:22 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char *no_way()
{
	char	*tab;
	tab = malloc(sizeof(char));
	if (!tab)
		return (NULL);
	tab[0] = 0;
	return (tab);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*tab;

	i = 0;
	if (!s)
		return (NULL);
	if (!*s || start >= ft_strlen(s))
		return (no_way());
	if (len > ft_strlen(s) - start + 1)
		len = ft_strlen(s) - start + 1;
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

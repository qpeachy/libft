/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strdup.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/08 15:38:32 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/08 16:29:06 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	int		i;
	int		size;
	char	*tab;
	
	i = 0;
	size = ft_strlen(s) + 1;
	tab = (char *)malloc(sizeof(char) * (size));
	if (!tab)
		return ((char *)NULL);
	while (s[i])
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}


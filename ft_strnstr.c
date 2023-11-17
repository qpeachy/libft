/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strnstr.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/08 13:43:53 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/09 17:49:49 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_size;

	i = 0;
	l_size = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	if (!*big)
		return (NULL);
	while (big[i] && i < len)
	{
		if (ft_strncmp(big + i, little, l_size) == 0)
		{
			if (i + l_size > len)
				return (NULL);
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

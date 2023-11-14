/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strrchr.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/08 12:05:57 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/10 14:22:52 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int oc;

	i = 0;
	oc = 0;
	if (ft_strchr(s, c) == 0)
		return (NULL);
	if ((unsigned char)c == '\0')
	{
		while(s[i])
			i++;
		return((char *)s + i);
	}
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			oc = i;
		i++;
	}
	return ((char *)s + oc);
}

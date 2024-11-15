/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memcpy.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/08 09:06:30 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/13 15:46:09 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tmp_dest;
	char	*tmp_src;
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	dest = tmp_dest;
	return (dest);
}

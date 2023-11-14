/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_isascii.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <marvin@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/06 15:21:08 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/06 15:35:03 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

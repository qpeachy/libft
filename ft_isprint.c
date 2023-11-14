/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_isprint.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/06 15:35:15 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/10 10:25:41 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

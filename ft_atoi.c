/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_atoi.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/08 14:15:41 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/10 16:40:46 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int pole;
	int	i;

	result = 0;
	pole = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\a' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			pole *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * pole);
}

/*#include <stdio.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("real fct: %d, crtd fct: %d", atoi(argv[1]), ft_atoi(argv[1]));
	return (argc * 0);
}*/
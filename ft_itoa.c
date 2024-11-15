/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_itoa.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/09 13:33:14 by mapale			#+#	#+#			 */
/*   Updated: 2023/11/09 17:09:38 by mapale		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h" 

int	count_nbr(int n)
{
	int		count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	rev_tab(char *s)
{
	int		i;
	int		j;
	int		size;
	char	tmp;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	size = j;
	j--;
	while (i < size / 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char		*tab;
	int			i;
	long int	nn;

	i = 0;
	tab = (char *)malloc(sizeof(char) * count_nbr(n) + 1);
	if (!tab)
		return (NULL);
	if (n < 0)
		nn = (long int)n * -1;
	else
		nn = (long int)n;
	while (nn > 9)
	{
		tab[i++] = nn % 10 + '0';
		nn /= 10;
	}
	tab[i++] = nn + '0';
	if (n < 0)
		tab[i++] = '-';
	tab[i] = '\0';
	rev_tab(tab);
	return (tab);
}

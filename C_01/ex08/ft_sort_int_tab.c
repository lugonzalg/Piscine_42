/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:46:11 by lugonzal          #+#    #+#             */
/*Updated: 2021/06/25 19:46:21 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	exchange;
	int	n;

	i = 0;
	n = 0;
	while (size > n)
	{
		i = n + 1;
		while (i < size)
		{
			if (tab[n] >= tab[i])
			{	
				exchange = tab[n];
				tab[n] = tab[i];
				tab[i] = exchange;
			}
			i++;
		}
		n++;
	}
}

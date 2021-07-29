/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:54:11 by lugonzal          #+#    #+#             */
/*   Updated: 2021/04/24 20:14:24 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	exchange1;

	i = 0;
	size = size - 1;
	while (size > i)
	{
		exchange1 = tab[i];
		tab[i] = tab[size];
		tab[size] = exchange1;
		i++;
		--size;
	}
}

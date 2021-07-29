/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_deco.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:46:19 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 18:34:13 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "handle.h"
#include <stdlib.h>

int	ft_power_num(int times)
{
	int	n;

	n = 1;
	times -= 1;
	if (times == 0)
		n = 0;
	while (times-- > 0)
		n *= 10;
	return (n);
}

int	*ft_table(int n)
{
	int	*table;

	table = (int *)malloc(n * 2 * sizeof (int));
	g_table_ptr = table;
	return (table);
}

void	ft_put_table(int n, int exp, int i)
{
	int	*ptr;

	ptr = ft_table(n);
	*(ptr + i) = n;
	i++;
	*(ptr + i) = exp;
}

void	ft_num_deco(long unsigned int n, int times)
{
	long unsigned int	tmp_n;
	int					exp;
	int					temp_n2;
	int					i;

	i = 0;
	tmp_n = n;
	while ((times -1) != 0)
	{
		while (n > 9)
			n /= 10;
		exp = ft_power_num(times);
		ft_put_table(n, exp, i);
		temp_n2 = n;
		n = tmp_n - (n * exp);
		tmp_n = tmp_n - (temp_n2 * exp);
		--times;
		i += 2;
	}
	ft_put_table(n, 0, i);
}

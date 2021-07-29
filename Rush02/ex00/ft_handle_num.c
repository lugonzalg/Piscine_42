/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 11:27:53 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 17:47:20 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validations.h"
#include "handle.h"

void	ft_handle_num(long long unsigned int num, int n)
{
	if (num <= 4294967295)
		ft_num_deco(num, n);
	else
	{
		ft_warnings(1);
	}
}

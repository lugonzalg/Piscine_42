/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_warnings.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:57:40 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 11:14:44 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "std.h"

void	ft_warnings(int	n)
{
	if (n == 0)
		write(1, "Error\n", 6);
	if (n == 1)
		write(1, "error\n", 6);
	if (n == 2)
		write(1, "ERROR\n", 6);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:17:55 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 17:47:12 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "validations.h"
#include "handle.h"
void	ft_atoi(char *argv, int n)
{
	int						i;
	long long unsigned int	out;

	out = 0;
	i = -1;
	argv = &argv[1];
	while (argv[i] != '\0')
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			out = out * 10 + (argv[i] - '0');
		i++;
	}
	ft_handle_num(out, n);
}

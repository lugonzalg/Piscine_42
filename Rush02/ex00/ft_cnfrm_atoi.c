/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnfrm_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 18:06:26 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 16:48:33 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "validations.h"
#include "std.h"
#include <unistd.h>

int	ft_cnfrm_atoi(char *argv)
{
	int	i;
	int	only_num;

	only_num = 0;
	i = 0;
	while (argv[i] != '\0')
	{	
		if (argv[i] == '-')
		{	
			ft_warnings(0);
			only_num = 1;
			break ;
		}
		if (argv[i] > '9' || argv[i] < '0')
		{	
			ft_warnings(1);
			only_num = 1;
			break ;
		}
		i++;
	}
	return (only_num);
}

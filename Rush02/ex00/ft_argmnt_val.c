/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argmnt_val.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:47:45 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 20:53:23 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "handle.h"
#include "validations.h"

void	ft_argmnt_val(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1 && argc < 4)
	{	
		if (argc == 2)
			ft_arg_segmntA(argv[1]);
		else
			ft_arg_segmntB(argv[1], argv[2]);
	}
	else
		ft_warnings(2);
}

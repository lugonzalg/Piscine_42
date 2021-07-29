/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_segmnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 20:08:00 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/02 20:53:25 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "validations.h"
#include "handle.h"

void	ft_arg_segmntA(char *argv)
{
	int	number;

	number = 0;
	g_argv_ptr = argv;
	number = ft_cnfrm_atoi(g_argv_ptr);
	if (number == 0)
	{
		ft_strlen(g_argv_ptr);
		ft_open_file();
	}
}

void	ft_arg_segmntB(char *argv1, char *argv2)
{
	int	number;

	number = 0;
	g_argv_ptr = argv2;
	g_dict_argmnt = argv1;
	number = ft_cnfrm_atoi(g_argv_ptr);
	if (number == 0)
	{
		ft_strlen(g_argv_ptr);
		ft_open_file();
	}
}

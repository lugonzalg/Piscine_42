/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_files_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:27:30 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/06 20:56:34 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_empty(char *text)
{
	int		i;
	char	empty;
	int		comp;

	comp = 0;
	i = 0;
	while (text[i] >= '0' && text[i] <= '9')
		i++;
	empty = text[i];
	while (text[i] != '\n')
		i++;
	while (text[i++] != '\0')
	{
		if (empty == text[i])
			comp++;
	}
	free(text);
	if (comp == 0)
		return (0);
	return (1);
}

int	ft_check_rows_A(char *text)
{
	int	out;
	int	i;

	i = 0;
	while (text[i] >= '0' && text[i] <= '9')
	{	
		out = out * 10 + (text[i] - '0');
		i++;
	}
	return (out);
}

int	ft_check_rows_B(char *text)
{
	int	jump;
	int	n;
	int	i;

	i = 0;
	jump = 0;
	while (text[i] != '\0')
	{
		if (text[i] == '\n')
			jump++;
		i++;
	}
	n = ft_check_rows_A(text);
	if (n == jump - 1)
		return (ft_empty(text));
	return (0);
}

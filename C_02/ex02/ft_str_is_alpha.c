/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:40:24 by lugonzal          #+#    #+#             */
/*   Updated: 2021/04/28 18:59:43 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'Z' && str[i] < 'a') || str[i] < 'A' || str[i] > 'z')
			flag = 0;
		i++;
	}
	return (flag);
}
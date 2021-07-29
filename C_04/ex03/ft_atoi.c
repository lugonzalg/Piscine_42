/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:02:58 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/03 15:07:20 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	out;
	int	negativo;

	out = 0;
	negativo = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			out = out * 10 + (str[i] - '0');
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break ;
		}
		if (str[i] == '-')
			negativo++;
		i++;
	}
	if (negativo % 2 == 1)
		return (-out);
	return (out);
}

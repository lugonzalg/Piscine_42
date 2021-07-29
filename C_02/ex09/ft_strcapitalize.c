/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:42:55 by lugonzal          #+#    #+#             */
/*   Updated: 2021/04/29 15:51:09 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_strcap_exp(char *str, int i)
{
	if (((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
		&& (str[i] >= 'A' && str[i] <= 'Z'))
		str[i] = str[i] + 32;
	if ((str[i] <= 'Z' && str[i] >= 'A')
		&& ((str[i -1] >= '0' && str[i - 1] <= '9')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
		str[i] = str[i] + 32;
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			if ((str[i - 1] < 'A' && str[i -1] > '9')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] < '0')
				str[i] = str[i] - 32;
			else if (str[i - 1] > 'z')
				str[i] = str[i] - 32;
			else if (str[0] >= 'a' && str[0] <= 'z')
				str[0] = str[0] - 32;
		}
		ft_strcap_exp(str, i);
		i++;
	}
	return (str);
}

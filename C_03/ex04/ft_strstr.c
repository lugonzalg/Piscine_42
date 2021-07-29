/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:01:02 by lugonzal          #+#    #+#             */
/*   Updated: 2021/05/03 19:44:18 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		i_find;

	i_find = 0;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i_find])
		{
			if (to_find[i_find + 1] == '\0')
				return (str + i - i_find);	
		}
			else
				i_find = 0;		
		i++;
		i_find++;
	}
	return (0);
}

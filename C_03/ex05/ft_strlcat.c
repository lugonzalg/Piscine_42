/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:38:52 by lugonzal          #+#    #+#             */
/*   Updated: 2021/04/30 11:06:39 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i_src;

	i = 0;
	i_src = 0;
	while (dest[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[i_src] != '\0' && (size - i -1) > i_src)
		{
			dest[i] = src[i_src];
			i++;
			i_src++;
		}
		dest[i] = 0;
		i = 0;
		while (dest[i])
			i++;
	}
	return (i);
}

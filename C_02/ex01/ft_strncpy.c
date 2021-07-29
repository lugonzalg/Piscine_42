/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:53:30 by lugonzal          #+#    #+#             */
/*   Updated: 2021/04/29 20:39:40 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	int		i;
	int		n;
	char	str1 []="AAAAAA";
	char	str2 []="12";
	char	*str3;
	n = 1;

	i = 0;

	str3 = ft_strncpy(str1, str2, n);

	printf("%s", str3);
}

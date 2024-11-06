/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbaret <qbaret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:21:26 by qbaret            #+#    #+#             */
/*   Updated: 2024/11/05 15:24:55 by qbaret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;

	i = 0;
	j = 0;
	src_len = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[src_len] != '\0')
		src_len++;
	if (i == size)
		return (size + src_len);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	return (i + src_len - j);
}

int	main()
{
	char	dest[30] = "bonjour";
	char	src[] = "hello";
	unsigned int	size = 13;
	
	printf("Longueur totale prévue : %u\n", ft_strlcat(dest, src, size));
	printf("Chaîne finale : %s\n", dest);
	return (0);
}
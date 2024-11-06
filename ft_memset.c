/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbaret <qbaret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:15:43 by qbaret            #+#    #+#             */
/*   Updated: 2024/11/04 16:20:55 by qbaret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (s);
}

/*int main()
{
	char arr[10];
	int i = 0;

	ft_memset(arr, 'a', 10);
	while(i < 10)
	{
		i++;
		printf("%c ", arr[i]);
	}
	return (0);
}*/
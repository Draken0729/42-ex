/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbaret <qbaret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:03:58 by qbaret            #+#    #+#             */
/*   Updated: 2024/11/04 16:31:00 by qbaret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int main()
{
	char arr[10];
	int i = 0;

	ft_bzero(arr, 10);
	while(i < 10)
	{
		i++;
		printf("%d ", arr[i]);
	}
	return (0);
}*/
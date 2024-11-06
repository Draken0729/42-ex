/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbaret <qbaret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:55:02 by qbaret            #+#    #+#             */
/*   Updated: 2024/11/05 15:55:49 by qbaret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	{
		if (c >= 'A' && c <= 'Z')
			return (c + 32);
	}
	return (c);
}

int main(void) 
{
    char upper = 'A';
	
	printf("%c\n", ft_tolower(upper));
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:42:11 by quentin           #+#    #+#             */
/*   Updated: 2024/11/06 15:54:26 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	
	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(const char *s) 
{
    size_t len = ft_strlen(s);
    char *copy = (char *)malloc(len + 1); 

    if (copy == NULL)
	{
		return NULL;
    }

    ft_memcpy(copy, s, len + 1);
    return copy;
}

/*int main() 
{
    const char *source = "Hello, world!";
    char *copy = ft_strdup(source);

    if (copy == NULL) {
        printf("Échec de l'allocation mémoire.\n");
        return 1;
    }

    printf("Source: %s\n", source);
    printf("Copie: %s\n", copy);

    free(copy);

    return 0;
}*/
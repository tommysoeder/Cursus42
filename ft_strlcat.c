/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:17:46 by tomamart          #+#    #+#             */
/*   Updated: 2025/04/09 19:59:52 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	src[i] = '\0';
	return (i);
}
/*
int	main(void)
{
	char src[50] = "qué tal?";
	char dest[50] = "Hola, ";

//	ft_strlcat(dest, src, 5);
//	printf("%s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, 5));
}*/

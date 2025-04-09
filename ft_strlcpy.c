/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:06:49 by tomamart          #+#    #+#             */
/*   Updated: 2025/04/09 19:07:00 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strlcpy(char *dest, char *src, int n)
{
	int	i;
	int	srclen;

	srclen = ft_strlen(src);
	i = 0;
	while (i < n - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
/*
int	main(void)
{
	char dest[10] = "asdas";*/
	/*char dest2[10];*/
//	char *src = "Hola";
	/*int	r;*/

	/*r = ft_strlcpy(dest, src, 3);*/
	//ft_strlcpy(dest, src, 4);
	/*strlcpy(dest, src, 3);*/
	//printf("%d %s\n", ft_strlcpy(dest, src, 4), dest);
	/*printf("%s\n", dest2);*/
	//return (0);
//}

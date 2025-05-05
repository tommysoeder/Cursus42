/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:27:14 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/05 19:36:25 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, int n)
{
	int	i;
	int	j;

	i = 0;
	if (!haystack || !needle)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < n)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *haystack = "Hola, ¿Qué tal?";
	char *needle = "tal";
	int n = 25;

	char *res = ft_strnstr(haystack, needle, n);
	if (res != NULL)
		printf("%s\n", res);
	else
		printf("%s\n", "Not found");
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:27:14 by tomamart          #+#    #+#             */
/*   Updated: 2025/04/09 20:36:49 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;


	if (needle[0] == '\0')
		return (char *)haystack;
	while (haystack[i] && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] && haystack[i + j] == needle[j] && (i + j) < n)
			j++;
			if (needle[j] == '\0')
				return (char *)&haystack[i];
			j = 0;
		}
		i++;
        }
	return NULL;
}

int	main(void)
{
	char *haystack = "Hola, ¿Qué tal?";
	char *needle = "tal";
	int n = 3;

	printf("%s\n", ft_strnstr(haystack, needle, n));
}

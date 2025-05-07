/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:12:48 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/07 18:41:35 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;

	i = 0;
	while (s[i])
		i++;
	copy = (char *)malloc((i * 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main(void)
{
    const char *src = "Hola";
    char *copia = ft_strdup(src);
    if (!copia)
        printf("Error");
    printf("Original: %s\n", src);
    printf("Copia: %s\n", copia);
    free(copia);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomamart <tomamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:55:01 by tomamart          #+#    #+#             */
/*   Updated: 2025/05/07 17:37:39 by tomamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (con malloc(3)) y devuelve una substring de
// la string ’s’.
// La substring empieza desde el índice ’start’ y
// tiene una longitud máxima ’len’.

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"
//#include <stdio.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char*   substr;
    size_t  i;
    size_t  s_len;

    if(!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        substr = malloc(1);
        if (!substr)
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }
    if (len > s_len - start)
        len = s_len - start;
    substr = malloc(len + 1);
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
/*
int main(void)
{
    char *str = "Hola chicos !!";
    char *sub = ft_substr(str, 5, 3);

    if (sub)
    {
        printf("Substring: %s\n", sub);
        free(sub);
    }
    else
        printf("Error\n");
}*/
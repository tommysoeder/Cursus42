// Reserva (con malloc(3)) y devuelve una nueva
// string, formada por la concatenación de ’s1’ y
// ’s2’.

#include <stdlib.h>
#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i = 0;
	size_t	j = 0;
	char	*joined;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);

	total_len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!joined)
		return (NULL);

	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';

	return (joined);
}
/*
int	main(void)
{
	const char *parte1 = "Hola, ";
	const char *parte2 = "qué tal?";
	char	*resultado;

	resultado = ft_strjoin(parte1, parte2);
	if(resultado == NULL)
	{
		printf("Error");
		return(1);
	}
	printf("Resultado: %s\n", resultado);
	free(resultado);
}
*/
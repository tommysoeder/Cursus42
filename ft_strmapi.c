#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *result;
    unsigned int    i;

    if (!s || !f)
        return (NULL);
    result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!result)
        return(NULL);
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

// char    to_upper_wrapper(unsigned int i, char c)
// {
//     (void)i;
//     return (char)ft_toupper(c);
// }

// int main(void)
// {
//     char    *original = "Hola a todos!";
//     char    *resultado;

//     resultado = ft_strmapi(original, to_upper_wrapper);
//     if (!resultado)
//     {
//         printf("Error\n");
//         return(1);
//     }
//     printf("Original: %s\n", original);
//     printf("Resultado: %s\n", resultado);
//     free(resultado);
//     return (0);
// }
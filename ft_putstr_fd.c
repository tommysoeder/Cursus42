// Envía la string ’s’ al file descriptor
// especificado.

#include <unistd.h>
// #include <stdio.h>
#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return;
    write(fd, s, ft_strlen(s));
}
//
// int main(void)
// {
//     char *str = "Hola corrector!\n";

//     ft_putstr_fd(str, 1);
//     return 0;
// }

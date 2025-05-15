// Envía el carácter ’c’ al file descriptor
// especificado.

#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
int main(void)
{
    char c = 'A';

    ft_putchar_fd(c, 1);
    ft_putchar_fd('\n', 1);
}*/
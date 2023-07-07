#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    int		i;
    char	c[10];
    long	l;

    l = nb;
    if (l == 0)
        ft_putchar('0');
    if (l < 0)
    {
        ft_putchar('-');
        l = l * -1;
    }
    i = 0;
    while (l > 0)
    {
        c[i] = l % 10 + '0';
        l = l / 10;
        i++;
    }
    i--;
    while (i >= 0)
    {
        ft_putchar(c[i]);
        i--;
    }
}
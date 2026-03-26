#include <unistd.h>
 
void ft_putnbr(int nb)
{
    char	c;

    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    else if (nb < 0)
    {
        write(1, "-", 1);
        ft_putnbr(-nb);
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        c = nb + '0';
        write(1, &c, 1);
    }
}
int main()
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(-12345);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(67890);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(42);
    write(1, "\n", 1);
    return 0;
}
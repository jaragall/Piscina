#include <unistd.h>

void ft_print_even_odd(void)
{
    char c;
    c = '0';

    while (c <= '9')
    {
        write(1, &c, 1);
        if (c % 2 ==0)
         write(1, "P", 1);
        else
         write(1, "I", 1);
        c++;
     if (c <= '9')
     {
        write(1, ", ", 2);
     }
    }
    write(1, "\n", 1);
}
int main(void)
{
    ft_print_even_odd();
    return 0;
}
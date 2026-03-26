#include <unistd.h>

void ft_print_back(void)
{
    char a;
    char b; 
    a = '1';
    while (a <= '9')
    {
       b = '0';
        while (b < a)
        {
            write (1, &a, 1);
            write (1, &b, 1);
            if (!(a == '9' && b == '8'))
            {
                write(1, ", ", 2);
            }
            b++;
        }
        a++;
    }    
write (1, "\n", 1);
}
int main ()
{
    ft_print_back();
    return (0);
}
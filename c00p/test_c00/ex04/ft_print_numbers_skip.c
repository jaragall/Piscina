#include <unistd.h>

void ft_print_numbers_skip(void)
{
char a;

a = '9';
while (a >= '0')
{
    if (!(a == '3' || a == '7'))
    {
     write (1, &a, 1);
    }
a--;
}
write (1, "\n", 1);
}

int main ()
{
ft_print_numbers_skip();
return(0);
}

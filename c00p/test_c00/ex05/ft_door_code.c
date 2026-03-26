#include <unistd.h>

void ft_door_code(void)
{ 
char a;
char b;

a = '1';
b = '9';

while (a <= '9')
{
    write (1, &a, 1);
    write (1, &b, 1);

if (!(a == '9'))
    write (1, ", ", 2);
else 
    write (1, "\n", 1);
a++;
b--;
}
}
int main ()
{
ft_door_code();
return(0);
}

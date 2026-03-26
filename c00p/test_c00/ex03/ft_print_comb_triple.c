#include <unistd.h>

void ft_print_comb_triple(void)
{
char a;
char b;
char c;

a = '9';
while (a >= '2')
{
b = a - 1;
while (b >= '1')
{
c = b - 1;

while (c >= '0')
{
write (1, &a, 1);
write (1, &b, 1);
write (1, &c, 1);
if (!(a == '2' && b == '1' && c == '0'))
{   
write (1, ", ", 2);
}
else
{
    write (1, "\n", 1);
}
c--;
}
b--;
}
a--;

}
}

int main()
{
ft_print_comb_triple();
return 0;
}
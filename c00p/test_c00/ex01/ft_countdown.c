#include <unistd.h>

void ft_countdown(void)
{
    int n = 9;
    while (n >= 0)
    {
        char c = n + '0';
        write(1, &c, 1);
        n--;
    }
    write(1, "\n", 1);
}
int main(void)
{
    ft_countdown();
    return 0;
}
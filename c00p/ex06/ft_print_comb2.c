#include <stdio.h>

void ft_print_comb2(void)
{
    char i = 0;
    char j = i + 1;

    char c1 = (i / 10) + '0';
    char c2 = (i % 10) + '0';

    char c3 = (j / 10) + '0';
    char c4 = (j % 10) + '0';
    while (i <= 98)
    {
        j = i + 1;
        while (j <= 99)
        {
            c1 = (i / 10) + '0';
            c2 = (i % 10) + '0';

            c3 = (j / 10) + '0';
            c4 = (j % 10) + '0';

            write(1, &c1, 1);
            write(1, &c2, 1);
            write(1, " ", 1);
            write(1, &c3, 1);
            write(1, &c4, 1);
            if(!(i == 98 && j == 99))
            {
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}
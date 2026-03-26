#include <unistd.h>

void ft_print_array_test(void)
{
int tab[3];
int i = 0;
char c;

tab[0] = 7;
tab[1] = 8;
tab[2] = 9;

while (i < 3)
{
	c = tab[i] + '0';
	write(1, &c, 1);
	i++;
}

}

int main()
{
	ft_print_array_test();
	return(0);
}


#include <unistd.h>

void ft_print_array(int *tab, int n)
{
	int i = 0;
	char c;

	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void ft_print_combn(int n)
{
	int tab[10];
	int i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (1)
	{
		ft_print_array(tab, n);
		if (tab[0] == 10 - n)
		{
			write(1, "\n", 1);
			break;
		}
		write(1, ", ", 2);
		i = n - 1;
		while(i >= 0 && tab[i] == 10 - n + i)
		i--;
		tab[i]++;
		while(i < n - 1)
		{
			tab[i + 1] = tab[i] +1;
			i++;
		}
	}
}

int main()
{
	ft_print_combn(2);
	return(0);
}


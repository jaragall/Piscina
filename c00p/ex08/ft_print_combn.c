#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_array(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = -1;
	while (++i < n)
		tab[i] = i;
	while (1)
	{
		ft_print_array(tab, n);
		if (tab[0] == 10 - n)
			break ;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && tab[i] == 10 - n + i)
			i--;
		tab[i]++;
		while (i < n - 1)
		{
			tab[i + 1] = tab[i] + 1;
			i++;
		}
	}
}
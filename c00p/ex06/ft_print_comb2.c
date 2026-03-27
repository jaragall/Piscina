#include <unistd.h>

void	ft_put_numbers(int a, int b)
{
	char	c;

	c = (a / 10) + '0';
	write(1, &c, 1);
	c = (a % 10) + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = (b / 10) + '0';
	write(1, &c, 1);
	c = (b % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_numbers(a, b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
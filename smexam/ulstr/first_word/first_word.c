#include <unistd.h>

void	ft_first_word(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] == '\t' || str[i] == ' ')
		++i;
	while (str[i] != '\0' &&  str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		++i;
	}
	write(1, '\n', 1);
}

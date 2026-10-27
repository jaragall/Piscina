int ft_atoi(const char *str)
{
	int	i;
	int	signo;
	int	resultado;

	i = 0;
	signo = 1;
	resultado = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;

	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = signo * -1;
		++i;
	}

	while (str[i] >= '0' && str[i] <= '9' )
	{	
		resultado = (resultado * 10) + str[i] - '0';
		++i;
	}

	return (resultado * signo);
}

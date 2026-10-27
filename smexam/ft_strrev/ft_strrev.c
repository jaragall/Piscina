char *ft_strrev(char *str)
{
	int		z;
	int		i;
	char	tmp;

	z = 0;
	i = 0;
	while (str[i] != '\0')
		++i;
	--i;
	while (i > z)
	{
		tmp = *str[z];
		str[z] = str[i];
		str[i] = tmp;
		++z;
		--i;
	}
	return (str);
}

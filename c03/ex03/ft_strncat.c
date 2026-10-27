char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	z;

	i = 0;
	while (dest[i] != '\0')
		++i;
	z = 0;
	while (src[z] != '\0' && z < nb)
	{
		dest[i] = src[z];
		++i;
		++z;
	}
	dest[i] = '\0';
	return (dest);
}

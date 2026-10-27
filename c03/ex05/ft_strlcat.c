unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int 	i;

	d_len = 0;
	while (dest[d_len] != '\0' && d_len < size)
		++d_len;
	s_len = 0;
	while (src[s_len] != '\0')
		++s_len;
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] != '\0' && (d_len + i) < (size - 1))
	{
		dest[d_len + i] = src[i];
		++i;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

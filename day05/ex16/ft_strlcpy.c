unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;
	unsigned int len;

	index = 0;
	len = 0;
	while (src[len])
		++len;
	while (src[index] && index < size)
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (len);
}

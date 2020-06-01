char	*ft_strncat(char *dest, char *src, int nb)
{
	int len;
	int j;

	len = 0;
	j = 0;
	while (dest[len])
		++len;
	while (src[j] && j < nb)
	{
		dest[len + j] = src[j];
		++j;
	}
	dest[len + j] = '\0';
	return (dest);
}

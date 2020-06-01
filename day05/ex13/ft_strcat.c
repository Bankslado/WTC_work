char	*ft_strcat(char *dest, char *src)
{
	int len;
	int j;

	len = 0;
	j = 0;
	while (dest[i])
		++len;
	while (src[j])
	{
		dest[len + j] = src[j];
		++j;
	}
	dest[len + j] = '\0';
	return (dest);
}

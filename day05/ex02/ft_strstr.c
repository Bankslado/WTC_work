char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[i])
		return (haystack);
	while (haystack[i])
	{
		while (haystack[i + j] && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
			++j;
		}
		++i;
	}
	return (0);
}

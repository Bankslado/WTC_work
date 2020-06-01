int	ft_strcmp(char *s1, char *s2)
{
	int i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		++i;
	if ((str1[i] - str2[i]) < 0)
		return (-1);
	else if ((str1[i] - str2[i]) > 0)
		return (1);
	else
		return (0);
}

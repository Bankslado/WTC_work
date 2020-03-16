char 	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	while (str[i])
		++i;
	j = -1;
	while (j <= i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		++j;
		--i;
	}
	return str;
}

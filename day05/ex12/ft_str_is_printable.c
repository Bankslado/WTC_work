int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] < 9) && (str[i] > 126 || str[i] > 12))
			return (0);
		++i;
	}
	return (1);
}

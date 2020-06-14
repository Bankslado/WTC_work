int	ft_is_base_valid(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		j = (i + 1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			else if (base[j] == '+' || base[j] == '-')
				return (0);
			else if (base[j] < 33 || base[j] > 126)
				return (0);
			++j;
		}
		++i;
	}
	return (i);
}

char	*ft_is_in_base(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (&base[i]);
		++i;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int sign;
	int nbr;
	int radix;
	int i;

	i = 0;
	nbr = 0;
	radix = ft_is_base_valid(base);
	if (radix == 0)
		return (0);
	if (*str == '\0')
		return (0);
	if (str[i] == '-')
	{
		sign = -1;
		++i;
	} else if (str[i] == '+')
		++i;
	while (str[i] && ft_is_in_base(base, str[i]))
	{
		nbr = nbr * radix + (ft_is_in_base(base, str[i]) - base);
		++i;
	}
	if (sign == -1)
		return (nbr * sign);
	return (nbr);
}

void	ft_putchar(char c);

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

void	ft_print_base(int nbr, int radix, char *base)
{
	char result[10];
	int index;

	index = 9;
	while (nbr)
	{
		result[index] = base[nbr % radix];
		nbr /= radix;
		--index;
	}
	++index;
	while (index < 10)
	{
		ft_putchar(result[index]);
		++index;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int radix;

	radix = ft_is_base_valid(base);
	if (radix == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	ft_print_base(nbr, radix, base);
}

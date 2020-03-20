int	ft_is_prime(int nb)
{
	int i;

	i = 0;
	if (nb <= 1)
		return (0);
	while (i <nb)
	{
		if ((nb % i) == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	++nb;
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		++nb;
	}
	return (0);
}

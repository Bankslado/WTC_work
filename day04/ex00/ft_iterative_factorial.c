int	ft_iterative_factorial(int nb)
{
	int fact;
	
	fact = 1;
	if (nb == 0)
		return (fact);
	if (nb < 0)
		return (0);
	else
	{
		while (nb != 0)
		{
			fact *= nb;
			--nb;
		}
		return (fact);
	}
}

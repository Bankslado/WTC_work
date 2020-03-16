void 	ft_print_combn(int n)
{
	int i;

	i = 0;
	if (n == 1)
	{
		while (i <= 9)
		{
			ft_putchar(i + '0');
			if (i != 9)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++i;
		}
	}
	ft_putchar('\n');
}

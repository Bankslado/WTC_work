void	ft_sort_integer_table(int *tab, int size)
{
	int inner;
	int outer;
	int temp;
	
	outer = 0;
	while (outer < size)
	{
		inner = outer;
		while (inner < size)
		{
			if (tab[inner] < tab[outer])
			{
				temp = tab[inner];
				tab[inner] = tab[outer];
				tab[outer] = temp;
			}
			++inner;
		}
		++outer;
	}
}

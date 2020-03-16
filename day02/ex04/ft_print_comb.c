void ft_putchar(char c);

void display(char d1, char d2, char d3)
{
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(d3);

	if (d1 != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');		
	} else if (d2 != '8')
	{
		ft_putchar(',');
		ft_putchar(' ');
	} else if (d3 != '9') 
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb(void)
{
	int i, j, k;
	i = 0;

	while (i <= 9)
	{
		k = i + 1;
		while (k <= 9)
		{
			j = k + 1;
			while (j <= 9)
			{
				display(i + '0', k + '0', j + '0');
				j++;
			}
			k++;
		}
		i++;
	}	
	ft_putchar('\n');
}

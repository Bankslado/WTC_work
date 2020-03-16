void ft_putchar(char c);

void puttoscreen(char c1, char c2, char c3, char c4)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	ft_putchar(c3);
	ft_putchar(c4);	
	if (c1 != '9' || c2 != '8' )
	{
		ft_putchar(','); 	
		ft_putchar(' ');
	}

}

void change_num_to_char(int n1, int n2)
{
	char a, b, c, d;
	
	a = (n1 / 10) + '0';
	b = (n1 % 10) + '0';
	c = (n2 / 10) + '0';
	d = (n2 % 10) + '0';
	puttoscreen(a, b, c, d);
}

void ft_print_comb2(void)
{
	int i, j;
	i = 0;	
	while (i <= 99)
	{
		j = i + 1;	
		while (j <= 99)
		{
			change_num_to_char(i, j);
			j++;
		}
		i++;
	}	
	ft_putchar('\n');
}

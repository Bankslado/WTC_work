void	ft_putchar(char c);

void	ft_puthex(char c)
{
	char hexadecimals[17] = "0123456789abcdef";

	ft_putchar(hexadecimals[c / 16]);
	ft_putchar(hexadecimals[c % 16]);
}

void	ft_putstr_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_puthex(str[i]);
		}
		else 
			ft_putchar(str[i]);
		++i;
	}
}

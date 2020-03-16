int ft_putchar(char c);

void ft_print_numbers(void)
{
	int i = 0;
	char asciii = '0';

	while(i <= 9)
	{
		ft_putchar(i + asciii);
		i = i + 1;
	}
}

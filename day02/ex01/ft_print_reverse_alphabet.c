int ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char ralph = 'z';

	while(ralph >= 'a')
	{
		ft_putchar(ralph);
		ralph--;
	}
}

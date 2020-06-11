#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_print_base(long long llnbr, long long radix, char *base)
{
	char 		result[21];
	unsigned long 	index;

	index = 20;
	while (llnbr)
	{
		result[index] = base[llnbr % radix];
		llnbr /= radix;
		--index;
	}
	while (index < 21)
	{
		ft_putchar(result[index]);
		++index;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long radix;
	long long llnbr;

	radix = ft_is_base_valid(base);
	llnbr = nbr;
	if (radix == 0)
		return ;
	if (llnbr < 0)
	{
		ft_putchar('-');
		llnbr *= -1;
	}
	ft_print_base(llnbr, radix, base);
}

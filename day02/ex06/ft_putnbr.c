#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long nb)
{
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	} else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	} else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}

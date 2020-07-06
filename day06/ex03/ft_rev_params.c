#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[argc - j][i])
		{
			ft_putchar(argv[argc - j][i]);
			++i;
		}
		ft_putchar('\n');
		++j;
	}
	return 0;
}

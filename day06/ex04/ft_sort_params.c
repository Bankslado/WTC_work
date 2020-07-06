#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_args(int argc, char **argv)
{
	int inner;
	int outer;

	inner = 1;
	while (inner < argc)
	{
		outer = 0;
		while (argv[inner][outer])
		{
			ft_putchar(argv[inner][outer]);
			++outer;
		}
		ft_putchar('\n');
		++inner;
	}	
}

int	is_okay(char *str1, char *str2)
{
	int i;

	i  = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] < str2[i])
			return (1);
		++i;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char*temp;
	int inner;
	int outer;

	outer = 1;
	if (argc < 2)
		return (1);
	while (outer != argc)
	{
		inner = outer;
		while (inner != argc)
		{
			if (is_okay(argv[inner], argv[outer]))
			{
				temp = argv[inner];
				argv[inner] = argv[outer];
				argv[outer] = temp;
			}
			++inner;
		}
		++outer;
	}
	display_args(argc, argv);
	return (0);
}

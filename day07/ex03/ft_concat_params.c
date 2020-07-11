#include <stdlib.h>

int	ft_get_length(int argc, char **argv)
{
	int i;
	int j;
	int len;

	j = 1;
	len = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			++i;
			++len;
		}
		++j;
	}
	return (len);
}

void	ft_transform_args(int argc, char **argv, char *str)
{
	int i;
	int j;
	int track_i;

	j = 1;
	track_i = 0;
	while (j < argc)
	{
		i = 0;
		while(argv[j][i])
		{
			str[track_i] = argv[j][i];
			++i;
			++track_i;
		}
		str[track_i] = '\n';
		++j;
		++track_i;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int len;
	char *str;

	len = ft_get_length(argc, argv);
	str = (char *)malloc(sizeof(*str) * (len + (argc - 1)));
	if (str == NULL)
		return (str);
	ft_transform_args(argc, argv, str);
	return (str);
}

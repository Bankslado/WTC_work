#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ints_arr;
	int i;

	if (min >= max)
		return (0);
	ints_arr = (int *)malloc(sizeof(*ints_arr) * (max - min));
	if (ints_arr == NULL)
		return (ints_arr);
	i = 0;
	while (min < max)
	{
		ints_arr[i] = min;
		++min;
		++i;
	}
	return (ints_arr);
}

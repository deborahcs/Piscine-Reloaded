
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}		
	return (array);
}
/*#include <stdio.h>
int	main(void)
{	
	int	*array = ft_range(10, 20);
	int	i = 0;

	while (i <=  9)
	{	
		printf("%i\n", array[i]);
		i++;
	}
}*/


#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*array;

	i = 0;
	if (!src)
		return (NULL);
	array = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i])
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}	
/*#include <stdio.h>
int	main(void)
{
	char	*dest = ft_strdup("fhsjs");
	printf("%s\n", dest);
}*/


int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
	}
		i++;
	return(1);
}
#include <stdio.h>
int	main(void)
{
	char	**tab = {HELLO, HFShs, 12, AA4};
	
	int	count;
	
	count = ft_count_if(tab, &ft_str_is_uppercase);
	
	printf("%d\n", count);
}

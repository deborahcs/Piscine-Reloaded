/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:51:33 by decabral          #+#    #+#             */
/*   Updated: 2025/10/17 09:52:36 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_foreach(int *tab, int length, void (*f)(int))
{	
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_putnbr(int nb)
{
	long	int num;
	char	c;
	
	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = num * - 1;
	}
	if (num >= 0 && num <= 9)
	{
		c = num + '0';
		write(1, &c, 1);
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}
int main (void)
{
	int	array[] = {20, 56, -558, 87446589, -0};
	
	int	length = 5;
	
	ft_foreach(array, length, &ft_putnbr);
}*/

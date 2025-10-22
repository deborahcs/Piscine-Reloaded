/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:32:38 by decabral          #+#    #+#             */
/*   Updated: 2025/10/14 11:42:30 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{	
	char	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
/*int main(void)
{
	ft_print_numbers();
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:26:14 by decabral          #+#    #+#             */
/*   Updated: 2025/10/14 11:31:49 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{	
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
/*int main (void)
{
	ft_print_alphabet();
}*/

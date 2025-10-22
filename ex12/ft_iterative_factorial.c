/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:24:55 by decabral          #+#    #+#             */
/*   Updated: 2025/10/14 14:50:25 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}

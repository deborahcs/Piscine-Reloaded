/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:54:22 by decabral          #+#    #+#             */
/*   Updated: 2025/10/15 15:36:44 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:10:07 by decabral          #+#    #+#             */
/*   Updated: 2025/10/15 09:12:57 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
int main(void)
{
	char *str = "kdfdkfhss";
	int	len = ft_strlen(str);
	printf("%s, %d\n", str, len);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:18:09 by decabral          #+#    #+#             */
/*   Updated: 2025/10/15 09:53:02 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*#include <stdio.h>
int main (void)
{
	char *s1 = "TE AMO";
	char *s2 = "TE Amo";

	printf(" %s\n %s\n %d\n", s1, s2, ft_strcmp(s1, s2));
}*/
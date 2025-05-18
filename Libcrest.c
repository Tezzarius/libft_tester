/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libcrest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:01:22 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 16:52:48 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	testbzero()
{
	char	str[10] = "Test";
	int		sw;
	int		i;

	sw = 0;
	printf("ft_bzero:   ");
	ft_bzero(str, 2);
	i = 0;
	while (str[i] && i < 2)
	{
		if (str[i] != '\0')
		{
			printf(RED "[KO] " RESET);
			sw = 1;
		}
		i++;
	}
	if (sw == 0)
		printf(GREEN "[OK] " RESET);
	ft_bzero(str, 12);
	i = 0;
	while (str[i] && i < 12)
	{
		if (str[i] != '\0')
		{
			printf(RED "[KO] " RESET);
			sw = 1;
		}
		i++;
	}
	if (sw == 0)
		printf(GREEN "[OK] " RESET);
	printf("\n");
}

void	testtoupper()
{
	printf("ft_toupper: ");
	if (ft_toupper('9') == '9')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_toupper('G') == 'G')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_toupper('$') == '$')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_toupper('t') == 'T')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testtolower()
{
	printf("ft_tolower: ");
	if (ft_tolower('9') == '9')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_tolower('G') == 'g')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_tolower('$') == '$')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_tolower('t') == 't')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
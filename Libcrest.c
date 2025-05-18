/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libcrest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:01:22 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 20:56:47 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	testbzero()
{
	char	str[20] = "test me if you can";

	printf("ft_bzero:   ");
	ft_bzero(str, 5);
	if (tester_strncmp(str, "\0\0\0\0\0", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_bzero(str, 8);
	if (tester_strncmp(str, "\0\0\0\0\0\0\0\0", 8) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_bzero(str, 12);
	if (tester_strncmp(str, "\0\0\0\0\0\0\0\0\0\0\0\0", 12) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_bzero(str, 16);
	if (tester_strncmp(str, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 16) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
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
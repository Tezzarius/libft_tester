/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 11:44:04 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 15:45:58 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	testisalpha()
{
	int	c;

	c = 128;
	printf("ft_isalpha: ");
	if(ft_isalpha('9') == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isalpha('G') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isalpha('$') == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isalpha(c) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testisdigit()
{
	int	c;

	c = 128;
	printf("ft_isdigit: ");
	if(ft_isdigit('9') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isdigit('G') == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isdigit('$') == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isdigit(c) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testisalnum()
{
	int	c;

	c = 128;
	printf("ft_isalnum: ");
	if(ft_isalnum('9') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isalnum('G') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isalnum('$') == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isalnum(c) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testisascii()
{
	int	c;

	c = 128;
	printf("ft_isascii: ");
	if(ft_isascii('9') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isascii('G') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isascii('$') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isascii(c) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
void	testisprint()
{
	int	c;
	int	d;

	c = 128;
	d = 31;
	printf("ft_isprint: ");
	if(ft_isprint('9') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isprint('G') == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isprint(d) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_isprint(c) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
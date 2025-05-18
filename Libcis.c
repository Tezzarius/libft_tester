/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libcis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 11:44:04 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 20:46:41 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	testisalpha()
{
	int	i;
	int	check;

	printf("ft_isalpha: ");
	i = 0;
	check = 0;
	while (i < 65)
	{
		if (ft_isalpha(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 91)
	{
		if (ft_isalpha(i) == 0)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 97)
	{
		if (ft_isalpha(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 123)
	{
		if (ft_isalpha(i) == 0)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testisdigit()
{
	int	i;
	int	check;

	printf("ft_isdigit: ");
	i = 0;
	check = 0;
	while (i < 48)
	{
		if (ft_isdigit(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 58)
	{
		if (ft_isdigit(i) == 0)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 128)
	{
		if (ft_isdigit(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testisalnum()
{
	int	i;
	int	check;

	printf("ft_isalnum: ");
	i = 0;
	check = 0;
	while (i < 48)
	{
		if (ft_isalnum(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 58)
	{
		if (ft_isalnum(i) == 0)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 65)
	{
		if (ft_isalnum(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 91)
	{
		if (ft_isalnum(i) == 0)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 97)
	{
		if (ft_isalnum(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 123)
	{
		if (ft_isalnum(i) == 0)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testisascii()
{
	int	i;
	int	check;

	printf("ft_isascii: ");
	i = 0;
	check = 0;
	while (i < 128)
	{
		if (ft_isascii(i) == 0)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
void	testisprint()
{
	int	i;
	int	check;

	printf("ft_isprint: ");
	i = 0;
	check = 0;
	while (i < 32)
	{
		if (ft_isprint(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 127)
	{
		if (ft_isprint(i) == 0)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	check = 0;
	while (i < 128)
	{
		if (ft_isprint(i) == 1)
			check = 1;
		i++;
	}
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
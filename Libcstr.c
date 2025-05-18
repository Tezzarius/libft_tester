/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libcstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:00:58 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 17:22:02 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	teststrlen()
{
	char	*c;

	c = "1";
	printf("ft_strlen:  ");
	if(ft_strlen("Tabula Rasa") == 11)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_strlen("@#$^\t^&*\n") == 9)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_strlen(c) == 1)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrlcpy()
{
	char	*str = "0123456789";
	char	dest[20] = "0";

	printf("ft_strlcpy: ");
	ft_strlcpy(dest, str, 7);
	if (tester_strncmp(dest, "0123456", 7))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrlcat()
{
	char str[14] = "i";

	printf("ft_strlcat: ");
	ft_strlcat(str, " don't know what i should write....", 15);
	if (tester_strncmp(str, "i don't know what", 16))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrchr()
{
	char 	str[] = "Tabula Rasa";
	char 	to_find = 'a';
	char	*dest;

	printf("ft_strchr:  ");
	dest = ft_strchr(str, to_find);
	if (tester_strncmp(dest, "abula Rasa", 11) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrrchr()
{
	char 	str[] = "Tabula Rasa";
	char 	to_find = 'a';
	char	*dest;

	printf("ft_strrchr: ");
	dest = ft_strrchr(str, to_find);
	if (tester_strncmp(dest, "a", 2) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");	
}

void	teststrncmp()
{
	printf("ft_strcmp:  ");
	if (ft_strncmp("Tabula Rasa", "Tabula Rasa", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_strncmp("Tabula Rasa", "TabuLa Rasa", 5) > 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_strncmp("Tabula Rasa", "Tabuda Rasa", 5) > 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_strncmp("Tab", "Tabula Rasa", 5) < 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libcmem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 14:32:41 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/20 12:15:46 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	testmemset()
{
	char	str[20] = "test me if you can";

	printf("ft_memset:  ");
	ft_memset(str, '*', 5);
	if (tester_strncmp(str, "*****", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memset(str, '$', 8);
	if (tester_strncmp(str, "$$$$$$$$", 8) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memset(str, '#', 12);
	if (tester_strncmp(str, "############", 12) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memset(str, '\0', 16);
	if (tester_strncmp(str, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 16) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testmemcpy()
{
	char	dest[20] = " ";

	printf("ft_memcpy:  ");
	ft_memcpy(dest, "Tabula Rasa", 7);
	if (tester_strncmp(dest, "Tabula", 7))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memcpy(dest, "\n\t\tgvertge\n\t", 10);
	if (tester_strncmp(dest, "\n\t\tgvertg", 10))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memcpy(dest, "Just try it for fun", 12);
	if (tester_strncmp(dest, "Just try it", 12))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memcpy(dest, "aerfgregrhrhrhrht", 16);
	if (tester_strncmp(dest, "aerfgregrhrhrhr", 16))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
#include <string.h>
void	testmemmove()
{
	char	str[20] = "123456789";
	char	str2[20] = "123456789";
	char	str3[20] = "123456789";
	char	str4[20] = "123456789";
	char	dest[20] = "0";

	printf("ft_memmove: ");
	ft_memmove(str + 1, str + 3, 5);
	if (tester_strncmp(str, "145678789", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memmove(str2 + 3, str2 + 1, 5);
	if (tester_strncmp(str2, "123234569", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memmove(dest, str3, 5);
	if (tester_strncmp(dest, "12345", 6) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memmove(str4, str4, 5);
	if (tester_strncmp(str4, "123456789", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testmemchr()
{
	char 	str[] = "Tabula Rasa";
	char 	to_find = 'l';
	char	to_find2 = 'u';
	char	to_find3 = 'b';
	char	to_find4 = 'a';
	char	*dest;

	printf("ft_memchr:  ");
	dest = ft_memchr(str, to_find, 4);
	if (!dest)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_memchr(str, to_find2, 4);
	if (tester_strncmp(dest, "ula Rasa", 9) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_memchr(str, to_find3, 3);
	if (tester_strncmp(dest, "bula Rasa", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_memchr(str, to_find4, 6);
	if (tester_strncmp(dest, "abula Rasa", 11) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
void	testmemcmp()
{
	printf("ft_memcmp:  ");
	if (ft_memcmp("Tabula Rasa", "Tabula Rasa", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_memcmp("Tabula Rasa", "TabuLa Rasa", 5) > 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_memcmp("Tabula Rasa", "Tabuda Rasa", 5) > 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_memcmp("Tab", "Tabula Rasa", 5) < 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_memcmp("atoms\0\0\0\0", "atoms\0abc", 8) < 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
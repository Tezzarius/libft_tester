/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libcmem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 14:32:41 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 16:39:23 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	testmemset()
{
	char	str[10] = "test";

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
	printf("\n");
}

void	testmemcpy()
{
	char	src[20] = "Tabula Rasa";
	char	src2[20] = "\n\t\tgvertge\n\t";
	char	dest[20] = " ";

	printf("ft_memcpy:  ");
	ft_memcpy(dest, src, 7);
	if (tester_strncmp(dest, "Tabula", 7))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_memcpy(dest, src2, 10);
	if (tester_strncmp(dest, "\n\t\tgvertg", 10))
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
	printf("\n");
}
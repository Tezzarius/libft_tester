/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libcstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 16:00:58 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/20 12:36:04 by bschwarz         ###   ########.fr       */
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
	if(ft_strlen("") == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if(ft_strlen("     ") == 5)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrlcpy()
{
	char	str[20] = "123456789";
	char	str2[20] = "abcdefghi";
	char	str3[20] = "ABCDEFGHI";
	char	str4[20] = "!@#$^&*()";
	char	dest[20] = "0";

	printf("ft_strlcpy: ");
	ft_strlcpy(dest, str, 3);
	if (tester_strncmp(dest, "12", 3) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_strlcpy(dest, str2, 5);
	if (tester_strncmp(dest, "abcd", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_strlcpy(dest, str3, 7);
	if (tester_strncmp(dest, "ABCDEF", 7) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_strlcpy(dest, str4, 9);
	if (tester_strncmp(dest, "!@#$^&*(", 9) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrlcat()
{
	char str[20] = "i ";

	printf("ft_strlcat: ");
	ft_strlcat(str, "don't know what i should write....", 5);
	if (tester_strncmp(str, "i don't know what", 6))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_strlcat(str, " know what i should write....", 5);
	if (tester_strncmp(str, "i don't know what", 11))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_strlcat(str, " what i should write....", 5);
	if (tester_strncmp(str, "i don't know what", 16))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_strlcat(str, " i should write....", 5);
	if (tester_strncmp(str, "i don't know what i should", 21))
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrchr()
{
	char 	str[] = "Tabula Rasa";
	char 	to_find = 'l';
	char	to_find2 = 'u';
	char	to_find3 = 'b';
	char	to_find4 = 'a';
	char	*dest;

	printf("ft_strchr:  ");
	dest = ft_strchr(str, to_find);
	if (tester_strncmp(dest, "la Rasa", 8) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strchr(str, to_find2);
	if (tester_strncmp(dest, "ula Rasa", 9) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strchr(str, to_find3);
	if (tester_strncmp(dest, "bula Rasa", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strchr(str, to_find4);
	if (tester_strncmp(dest, "abula Rasa", 11) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrrchr()
{
	char 	str[] = "Tabula Rasa";
	char 	to_find = 's';
	char	to_find2 = 'R';
	char	to_find3 = 'l';
	char	to_find4 = 'b';
	char	*dest;

	printf("ft_strrchr: ");
	dest = ft_strrchr(str, to_find);
	if (tester_strncmp(dest, "sa", 3) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strrchr(str, to_find2);
	if (tester_strncmp(dest, "Rasa", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strrchr(str, to_find3);
	if (tester_strncmp(dest, "la Rasa", 8) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strrchr(str, to_find4);
	if (tester_strncmp(dest, "bula Rasa", 10) == 0)
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

void	teststrnstr()
{
	char 	str[] = "Tabula Rasa";
	char 	*to_find = "sa";
	char	*to_find2 = "Ras";
	char	*to_find3 = "la";
	char	*dest;

	printf("ft_strnstr: ");
	dest = ft_strnstr(str, to_find, 12);
	if (tester_strncmp(dest, "sa", 3) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strnstr(str, to_find2, 12);
	if (tester_strncmp(dest, "Rasa", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strnstr(str, to_find3, 6);
	if (tester_strncmp(dest, "la Rasa", 8) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	dest = ft_strnstr(str, to_find2, 5);
	if (!dest)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	teststrdup()
{
	char	str[20] = "123456789";
	char	str2[20] = "abcdefghi";
	char	str3[20] = "ABCDEFGHI";
	char	str4[20] = "!@#$^&*()";
	char	*dest;

	printf("ft_strdup:  ");
	dest = ft_strdup(str);
	if (tester_strncmp(dest, "123456789", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_strdup(str2);
	if (tester_strncmp(dest, "abcdefghi", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_strdup(str3);
	if (tester_strncmp(dest, "ABCDEFGHI", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_strdup(str4);
	if (tester_strncmp(dest, "!@#$^&*()", 10) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	printf("\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:20:25 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/21 15:26:49 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	testsubstr()
{
	char	*str = "get this part of the string";
	char	*str2 = NULL;
	char	*dest;

	printf("ft_substr:  ");
	dest = ft_substr(str, 4, 4);
	if (tester_strncmp(dest, "this", 4) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_substr(str, 9, 4);
	if (tester_strncmp(dest, "part", 4) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_substr(str, 14, 2);
	if (tester_strncmp(dest, "of", 4) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_substr(str2, 4, 4);
	if (!dest)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	printf("\n");
}

void	teststrjoin()
{
	char	*str = "I ";
	char	*str2 = NULL;
	char	*dest;

	printf("ft_strjoin: ");
	dest = ft_strjoin(str, "always");
	if (tester_strncmp(dest, "I always", 9) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	str = "I always";
	dest = ft_strjoin(str, " get");
	if (tester_strncmp(dest, "I always get", 13) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	str = "I always get";
	dest = ft_strjoin(str, " longer");
	if (tester_strncmp(dest, "I always get longer", 20) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_strjoin(str2, "test");
	if (!dest)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	printf("\n");
}

void	teststrtrim()
{
	char	*str = "  \t \t \n   \n\n\n\t";
	char	*str2 = "  \t \t \n Hello \t  Please\n Trim me ! \n\n\n\t";
	char	*str3 = " Just for tests ";
	char	*str4 = NULL;
	char	*dest;

	printf("ft_strtrim: ");
	dest = ft_strtrim(str, " \n\t");
	if (tester_strncmp(dest, "", 1) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	str = "I always";
	dest = ft_strtrim(str2, " \n\t");
	if (tester_strncmp(dest, "Hello \t  Please\n Trim me !", 27) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	str = "I always get";
	dest = ft_strtrim(str3, "");
	if (tester_strncmp(dest, " Just for tests ", 20) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_strtrim(str4, " \n\t");
	if (!dest)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	printf("\n");
}

void	testsplit()
{
	char *s = "Hello World i'm a string";
	char **t = ft_split(s, ' ');
	char **dest = ft_split(NULL, ' ');
	
	printf("ft_split:   ");
	if (tester_strncmp(t[0], "Hello", 6) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (tester_strncmp(t[1], "World", 6) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (tester_strncmp(t[2], "i'm", 4) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (tester_strncmp(t[3], "a", 2) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (tester_strncmp(t[4], "string", 6) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (!dest)
		printf(GREEN "[OK] " RESET);
	else
 		printf(RED "[KO] " RESET);
 	int	i = 0;
	while (i < 5)
		free(t[i++]);
	free(t);
	printf("\n");
}

void	testitoa()
{
	char	*dest;
	
	printf("ft_itoa:    ");
	dest = ft_itoa(+345);
	if (tester_strncmp(dest, "345", 4) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_itoa(-345);
	if (tester_strncmp(dest, "-345", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_itoa(-2147483648);
	if (tester_strncmp(dest, "-2147483648", 12) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_itoa(0);
	if (tester_strncmp(dest, "0", 2) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	printf("\n");
}

static char mapitest(unsigned int i, char c)
{
	if (i % 2 == 0)
		return toupper(c);
	else
		return tolower(c);
}

void	teststrmapi()
{
	char	*src = NULL;
	char	*dest;
	
	printf("ft_strmapi: ");
	dest = ft_strmapi("abcdefghij", mapitest);
	if (tester_strncmp(dest, "AbCdEfGhIj", 11) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_strmapi("ABC123", mapitest);
	if (tester_strncmp(dest, "AbC123", 7) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_strmapi("@#$%^&", mapitest);
	if (tester_strncmp(dest, "@#$%^&", 7) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	dest = ft_strmapi(src, mapitest);
	if (!dest)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(dest);
	printf("\n");
}

void iteritest(unsigned int i, char *c)
{
	if (i % 2 == 0 && c)
		*c = toupper(*c);
}

void	teststriteri()
{
	char	str[20] = "abcdefghij";
	char	str2[20] = "aBcDeFgHiJ";
	char	str3[20] = "@#$%^&";
	char	*src = NULL;
	
	printf("ft_striteri:");
	ft_striteri(str, iteritest);
	if (tester_strncmp(str, "AbCdEfGhIj", 11) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_striteri(str2, iteritest);
	if (tester_strncmp(str2, "ABCDEFGHIJ", 11) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_striteri(str3, iteritest);
	if (tester_strncmp(str3, "@#$%^&", 7) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_striteri(src, iteritest);
	if (!src)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}
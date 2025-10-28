/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 12:18:23 by bschwarz          #+#    #+#             */
/*   Updated: 2025/10/28 15:34:57 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define RED		"\x1b[31m"
#define GREEN	"\x1b[32m"
#define RESET	"\x1b[0m"

int	tester_strncmp(const char *s1, const char *s2, size_t n){
	size_t	i = 0;

	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	testisalpha(){
	int	i = 0;
	int	check = 0;

	printf("ft_isalpha:   ");
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

void	testisdigit(){
	int	i = 0;
	int	check = 0;

	printf("ft_isdigit:   ");
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

void	testisalnum(){
	int	i = 0;
	int	check = 0;

	printf("ft_isalnum:   ");
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

void	testisascii(){
	int	i = -1;
	int	check = 0;

	printf("ft_isascii:   ");
	while (++i < 128)
		if (ft_isascii(i) == 0)
			check = 1;
	if(check == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testisprint(){
	int	i = 0;
	int	check = 0;

	printf("ft_isprint:   ");
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

void	testmemset(){
	char	str[20] = "test me if you can";

	printf("ft_memset:    ");
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

void	testmemcpy(){
	char	dest[20] = " ";

	printf("ft_memcpy:    ");
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

void	testmemmove(){
	char	str[20] = "123456789";
	char	str2[20] = "123456789";
	char	str3[20] = "123456789";
	char	str4[20] = "123456789";
	char	dest[20] = "0";

	printf("ft_memmove:   ");
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

void	testmemchr(){
	char 	str[] = "Tabula Rasa";
	char 	to_find = 'l';
	char	to_find2 = 'u';
	char	to_find3 = 'b';
	char	to_find4 = 'a';
	char	*dest;

	printf("ft_memchr:    ");
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

void	testmemcmp(){
	printf("ft_memcmp:    ");
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

void	testbzero(){
	char	str[20] = "test me if you can";

	printf("ft_bzero:     ");
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

void	testtoupper(){
	printf("ft_toupper:   ");
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

void	testtolower(){
	printf("ft_tolower:   ");
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

void	testatoi(){
	printf("ft_atoi:      ");
	if (ft_atoi("+345fgh") == 345)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_atoi("  -345fgh") == -345)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_atoi("++345fgh") == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	if (ft_atoi("--345fgh") == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\n");
}

void	testcalloc(){
	char	*ptr;

	printf("ft_calloc:    ");
	ptr = ft_calloc(5, 5);
	if (tester_strncmp(ptr, "\0\0\0\0\0", 5) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(ptr);
	ptr = ft_calloc(8, 8);
	if (tester_strncmp(ptr, "\0\0\0\0\0\0\0\0", 8) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(ptr);
	ptr = ft_calloc(12, 12);
	if (tester_strncmp(ptr, "\0\0\0\0\0\0\0\0\0\0\0\0", 12) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(ptr);
	ptr = ft_calloc(12, 16);
	if (tester_strncmp(ptr, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 16) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	free(ptr);
	printf("\n");
}

void	teststrlen(){
	char	*c;

	c = "1";
	printf("ft_strlen:    ");
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

void	teststrlcpy(){
	char	str[20] = "123456789";
	char	str2[20] = "abcdefghi";
	char	str3[20] = "ABCDEFGHI";
	char	str4[20] = "!@#$^&*()";
	char	dest[20] = "0";

	printf("ft_strlcpy:   ");
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

void	teststrlcat(){
	char str[20] = "i ";

	printf("ft_strlcat:   ");
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

void	teststrchr(){
	char 	str[] = "Tabula Rasa";
	char 	to_find = 'l';
	char	to_find2 = 'u';
	char	to_find3 = 'b';
	char	to_find4 = 'a';
	char	*dest;

	printf("ft_strchr:    ");
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

void	teststrrchr(){
	char 	str[] = "Tabula Rasa";
	char 	to_find = 's';
	char	to_find2 = 'R';
	char	to_find3 = 'l';
	char	to_find4 = 'b';
	char	*dest;

	printf("ft_strrchr:   ");
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

void	teststrncmp(){
	printf("ft_strcmp:    ");
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

void	teststrnstr(){
	char 	str[] = "Tabula Rasa";
	char 	*to_find = "sa";
	char	*to_find2 = "Ras";
	char	*to_find3 = "la";
	char	*dest;

	printf("ft_strnstr:   ");
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

void	teststrdup(){
	char	str[20] = "123456789";
	char	str2[20] = "abcdefghi";
	char	str3[20] = "ABCDEFGHI";
	char	str4[20] = "!@#$^&*()";
	char	*dest;

	printf("ft_strdup:    ");
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

void	testsubstr(){
	char	*str = "get this part of the string";
	char	*str2 = NULL;
	char	*dest;

	printf("ft_substr:    ");
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

void	teststrjoin(){
	char	*str = "I ";
	char	*str2 = NULL;
	char	*dest;

	printf("ft_strjoin:   ");
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

void	teststrtrim(){
	char	*str = "  \t \t \n   \n\n\n\t";
	char	*str2 = "  \t \t \n Hello \t  Please\n Trim me ! \n\n\n\t";
	char	*str3 = " Just for tests ";
	char	*str4 = NULL;
	char	*dest;

	printf("ft_strtrim:   ");
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

void	testsplit(){
	char *s = "Hello World i'm a string";
	char **t = ft_split(s, ' ');
	char **dest = ft_split(NULL, ' ');
	
	printf("ft_split:     ");
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

void	testitoa(){
	char	*dest;
	
	printf("ft_itoa:      ");
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

static char mapitest(unsigned int i, char c){
	if (i % 2 == 0)
		return toupper(c);
	else
		return tolower(c);
}

void	teststrmapi(){
	char	*src = NULL;
	char	*dest;
	
	printf("ft_strmapi:   ");
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

void iteritest(unsigned int i, char *c){
	if (i % 2 == 0 && c)
		*c = toupper(*c);
}

void	teststriteri(){
	char	str[20] = "abcdefghij";
	char	str2[20] = "aBcDeFgHiJ";
	char	str3[20] = "@#$%^&";
	char	*src = NULL;
	
	printf("ft_striteri:  ");
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

void test_putchar_fd(){
	int		fd[2];
	int		end;
	char	c[1];

	pipe(fd);
	printf("ft_putchar_fd:");
	ft_putchar_fd('h', fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 1);
	c[end] = '\0';
	if (c[0] == 'h')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	pipe(fd);
	ft_putchar_fd('#', fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 1);
	c[end] = '\0';
	if (c[0] == '#')
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	pipe(fd);
	ft_putchar_fd(0, fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 1);
	c[end] = '\0';
	if (c[0] == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	printf("\n");
}

void test_putendl_fd(){
	int		fd[2];
	int		end;
	char	c[20];

	pipe(fd);
	printf("ft_putendl_fd:");
	ft_putendl_fd("hello", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 7);
	c[end] = '\0';
	if ((tester_strncmp(c, "hello\n", 7)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	pipe(fd);
	ft_putendl_fd("here is number 9", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 18);
	c[end] = '\0';
	if ((tester_strncmp(c, "here is number 9\n", 18)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	pipe(fd);
	ft_putendl_fd("", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 12);
	c[end] = '\0';
	if ((tester_strncmp(c, "\n", 13)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	printf("\n");
}

void test_putstr_fd(){
	int		fd[2];
	int		end;
	char	c[20];

	pipe(fd);
	printf("ft_putstr_fd: ");
	ft_putstr_fd("hello", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 7);
	c[end] = '\0';
	if ((tester_strncmp(c, "hello", 6)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	pipe(fd);
	ft_putstr_fd("here is number 9", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 18);
	c[end] = '\0';
	if ((tester_strncmp(c, "here is number 9", 17)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	pipe(fd);
	ft_putstr_fd("", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 12);
	c[end] = '\0';
	if ((tester_strncmp(c, "", 12)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	printf("\n");
}

void test_putnbr_fd(){
	int		fd[2];
	int		end;
	char	c[5];

	pipe(fd);
	printf("ft_putnbr_fd: ");
	ft_putnbr_fd(9, fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 1);
	c[end] = '\0';
	if ((atoi(&c[0])) == 9)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	pipe(fd);
	ft_putnbr_fd(-13, fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 3);
	c[end] = '\0';
	if ((atoi(&c[0])) == -13)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	pipe(fd);
	ft_putnbr_fd(0, fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 3);
	c[end] = '\0';
	if ((atoi(&c[0])) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	close(fd[0]);
	printf("\n");
}

void *my_map(void *content){
	return ft_strdup(content + 1); // Entfernt erstes Zeichen
}

void del_map(void *content){
	free(content);
}

void my_iter(void *content){
	char *str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

void	test_lst(){
	t_list	*lst;
	
	printf("ft_lstnew_fd:   ");
	lst = ft_lstnew("first");
	if ((tester_strncmp(lst->content, "first", 6)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\nft_lstadd_back: ");
	ft_lstadd_back(&lst, ft_lstnew("last"));
	if ((tester_strncmp(lst->next->content, "last", 5)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\nft_lstadd_front:");
	ft_lstadd_front(&lst, ft_lstnew("new first"));
	if ((tester_strncmp(lst->content, "new first", 10)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\nft_lstsize:     ");
	int size = ft_lstsize(lst);
	if (size == 3)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\nft_lstlast:     ");
	t_list *last = ft_lstlast(lst);
	if ((tester_strncmp(last->content, "last", 10)) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\nft_lstdelone:   ");
	t_list *del_test = ft_lstnew(ft_strdup("del"));
	if (!del_test)
		printf(RED "[KO] " RESET);
	else
	{
		ft_lstdelone(del_test, free);
		printf(GREEN "[OK] " RESET);
	}
	printf("\nft_lstclear:    ");
	t_list *clear_test = ft_lstnew(ft_strdup("1"));
	ft_lstadd_back(&clear_test, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&clear_test, ft_lstnew(ft_strdup("3")));
	ft_lstclear(&clear_test, free);
	if (clear_test == NULL)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	printf("\nft_lstiter:     ");
	t_list *iter_test = ft_lstnew(ft_strdup("abc"));
	ft_lstiter(iter_test, my_iter);
	if (tester_strncmp(iter_test->content, "ABC", 4) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_lstdelone(iter_test, free);
	printf("\nft_lstmap:      ");
	t_list *map_test = ft_lstnew(ft_strdup("111"));
	ft_lstadd_back(&map_test, ft_lstnew(ft_strdup("222")));
	t_list *mapped = ft_lstmap(map_test, &my_map, &del_map);
	if (!mapped)
		printf(RED "[KO] " RESET);
	else if (tester_strncmp(mapped->content, "11", 3) == 0 &&
			tester_strncmp(mapped->next->content, "22", 3) == 0)
		printf(GREEN "[OK] " RESET);
	else
		printf(RED "[KO] " RESET);
	ft_lstclear(&map_test, del_map);
	ft_lstclear(&mapped, del_map);
	printf("\n");
}

int	main(int ac, char **av){
	printf("\nLibc functions:\n");
	testisalnum();
	testisalpha();
	testisascii();
	testisdigit();
	testisprint();
	testtolower();
	testtoupper();
	testatoi();
	testbzero();
	testcalloc();
	testmemchr();
	testmemcmp();
	testmemcpy();
	testmemmove();
	testmemset();
	teststrchr();
	teststrdup();
	teststrlcat();
	teststrlcpy();
	teststrlen();
	teststrncmp();
	teststrnstr();
	teststrrchr();
	printf("\nAdditional functions:\n");
	testitoa();
	testsplit();
	teststriteri();
	teststrjoin();
	teststrmapi();
	teststrtrim();
	testsubstr();
	test_putchar_fd();
	test_putendl_fd();
	test_putnbr_fd();
	test_putstr_fd();
	if (ac == 2 && !strcmp(av[1], "bonus"))
	{
		printf("\nBonus:\n");
		test_lst();
	}
	return 0;
}

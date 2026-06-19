#include "./inc/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define RED		"\x1b[31m"
#define GREEN	"\x1b[32m"
#define RESET	"\x1b[0m"

int check = 0;

// Utility functions

static void del_map(void *content) {
	free(content);
}

static char mapitest(unsigned int i, char c) {
	if (i % 2 == 0)
		return toupper(c);
	else
		return tolower(c);
}

static void my_iter(void *content) {
	char *str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

static void *my_map(void *content) {
	return ft_strdup(content + 1); // remove first char
}

static void printResult() {
	if (check)
		printf(RED "[KO] " RESET);
	else
		printf(GREEN "[OK] " RESET);
	check = 0;
}

static int tester_strncmp(const char *s1, const char *s2, size_t n) {
	size_t i;

	if (n == 0) return (0);
	for (i = 0; i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i]; i++);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// Libc functions

void isAlnum() {
	int	i = 0;

	printf("ft_isalnum:   ");
	for (; i < 48; i++)
		if (ft_isalnum(i))	check = 1;
	printResult();

	for (; i < 58; i++)
		if (!ft_isalnum(i))	check = 1;
	printResult();

	for (; i < 65; i++)
		if (ft_isalnum(i))	check = 1;
	printResult();

	for (; i < 91; i++)
		if (!ft_isalnum(i))	check = 1;
	printResult();

	for (; i < 97; i++)
		if (ft_isalnum(i))	check = 1;
	printResult();

	for (; i < 123; i++)
		if (!ft_isalnum(i))	check = 1;
	printResult();
	printf("\n");
}

void isAlpha() {
	int	i;

	printf("ft_isalpha:   ");

	for (i = 0; i < 65; i++)
		if (ft_isalpha(i)) check = 1;
	printResult();

	for (; i < 91; i++)
		if (!ft_isalpha(i))	check = 1;
	printResult();

	for (; i < 97; i++)
		if (ft_isalpha(i))	check = 1;
	printResult();

	for (; i < 123; i++)
		if (!ft_isalpha(i))	check = 1;
	printResult();
	printf("\n");
}

void isAscii() {
	int	i;

	printf("ft_isascii:   ");
	if (ft_isascii(-1)) check = 1;
	printResult();

	for (i = 0; i < 128; i++)
		if (!ft_isascii(i)) check = 1;
	printResult();

	if (ft_isascii(128)) check = 1;
	printResult();
	printf("\n");
}

void isDigit() {
	int	i;

	printf("ft_isdigit:   ");
	for (i = 0; i < 48; i++)
		if (ft_isdigit(i))	check = 1;
	printResult();

	for (; i < 58; i++)
		if (!ft_isdigit(i))	check = 1;
	printResult();

	for (; i < 128; i++)
		if (ft_isdigit(i))	check = 1;
	printResult();
	printf("\n");
}

void isPrint() {
	int	i;

	printf("ft_isprint:   ");
	for (i = 0; i < 32; i++)
		if (ft_isprint(i))	check = 1;
	printResult();
	
	for (; i < 127; i++)
		if (!ft_isprint(i)) check = 1;
	printResult();

	if (ft_isprint(127)) check = 1;
	printResult();
	printf("\n");
}

void toLower() {
	printf("ft_tolower:   ");
	if (ft_tolower('9') != '9') check = 1;
	printResult();

	if (ft_tolower('G') != 'g') check = 1;
	printResult();

	if (ft_tolower('$') != '$') check = 1;
	printResult();

	if (ft_tolower('t') != 't') check = 1;
	printResult();
	printf("\n");
}

void toUpper() {
	printf("ft_toupper:   ");
	if (ft_toupper('9') != '9') check = 1;
	printResult();

	if (ft_toupper('G') != 'G') check = 1;
	printResult();

	if (ft_toupper('$') != '$') check = 1;
	printResult();

	if (ft_toupper('t') != 'T') check = 1;
	printResult();
	printf("\n");
}

void aToI() {
	printf("ft_atoi:      ");
	if (ft_atoi("+345fgh") != 345) check = 1;
	printResult();

	if (ft_atoi("  -345fgh") != -345) check = 1;
	printResult();

	if (ft_atoi("++345fgh") != 0) check = 1;
	printResult();

	if (ft_atoi("--345fgh") != 0) check = 1;
	printResult();
	printf("\n");
}

void bZero() {
	char	str[20] = "test me if you can";

	printf("ft_bzero:     ");
	ft_bzero(str, 5);
	if (tester_strncmp(str, "\0\0\0\0\0", 5)) check = 1;
	printResult();

	ft_bzero(str, 8);
	if (tester_strncmp(str, "\0\0\0\0\0\0\0\0", 8)) check = 1;
	printResult();

	ft_bzero(str, 12);
	if (tester_strncmp(str, "\0\0\0\0\0\0\0\0\0\0\0\0", 12)) check = 1;
	printResult();

	ft_bzero(str, 16);
	if (tester_strncmp(str, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 16)) check = 1;
	printResult();
	printf("\n");
}

void Calloc() {
	char	*ptr;

	printf("ft_calloc:    ");
	ptr = ft_calloc(5, 5);
	if (tester_strncmp(ptr, "\0\0\0\0\0", 5) != 0) check = 1;
	printResult();
	free(ptr);

	ptr = ft_calloc(8, 8);
	if (tester_strncmp(ptr, "\0\0\0\0\0\0\0\0", 8) != 0) check = 1;
	printResult();
	free(ptr);

	ptr = ft_calloc(12, 12);
	if (tester_strncmp(ptr, "\0\0\0\0\0\0\0\0\0\0\0\0", 12) != 0) check = 1;
	printResult();
	free(ptr);

	ptr = ft_calloc(12, 16);
	if (tester_strncmp(ptr, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 16) != 0) check = 1;
	printResult();
	free(ptr);
	printf("\n");
}

void memChr() {
	char 	str[] = "Tabula Rasa";
	char 	to_find = 'l';
	char	to_find2 = 'u';
	char	to_find3 = 'b';
	char	to_find4 = 'a';
	char	*dest;

	printf("ft_memchr:    ");
	dest = ft_memchr(str, to_find, 4);
	if (dest) check = 1;
	printResult();

	dest = ft_memchr(str, to_find2, 4);
	if (tester_strncmp(dest, "ula Rasa", 9)) check = 1;
	printResult();

	dest = ft_memchr(str, to_find3, 3);
	if (tester_strncmp(dest, "bula Rasa", 10)) check = 1;
	printResult();

	dest = ft_memchr(str, to_find4, 6);
	if (tester_strncmp(dest, "abula Rasa", 11)) check = 1;
	printResult();

	printf("\n");
}

void memCmp() {
	printf("ft_memcmp:    ");
	if (ft_memcmp("Tabula Rasa", "Tabula Rasa", 5)) check = 1;
	printResult();

	if (ft_memcmp("Tabula Rasa", "TabuLa Rasa", 5) <= 0) check = 1;
	printResult();

	if (ft_memcmp("Tabula Rasa", "Tabuda Rasa", 5) <= 0) check = 1;
	printResult();

	if (ft_memcmp("Tab", "Tabula Rasa", 5) >= 0) check = 1;
	printResult();

	if (ft_memcmp("atoms\0\0\0\0", "atoms\0abc", 8) >= 0) check = 1;
	printResult();
	printf("\n");
}

void memCpy() {
	char	dest[20] = " ";

	printf("ft_memcpy:    ");
	ft_memcpy(dest, "Tabula Rasa", 7);
	if (!tester_strncmp(dest, "Tabula", 7)) check = 1;
	printResult();

	ft_memcpy(dest, "\n\t\tgvertge\n\t", 10);
	if (!tester_strncmp(dest, "\n\t\tgvertg", 10)) check = 1;
	printResult();

	ft_memcpy(dest, "Just try it for fun", 12);
	if (!tester_strncmp(dest, "Just try it", 12)) check = 1;
	printResult();

	ft_memcpy(dest, "aerfgregrhrhrhrht", 16);
	if (!tester_strncmp(dest, "aerfgregrhrhrhr", 16)) check = 1;
	printResult();
	printf("\n");
}

void memMove() {
	char	str[20] = "123456789";
	char	str2[20] = "123456789";
	char	str3[20] = "123456789";
	char	str4[20] = "123456789";
	char	dest[20] = "0";

	printf("ft_memmove:   ");
	ft_memmove(str + 1, str + 3, 5);
	if (tester_strncmp(str, "145678789", 10)) check = 1;
	printResult();

	ft_memmove(str2 + 3, str2 + 1, 5);
	if (tester_strncmp(str2, "123234569", 10)) check = 1;
	printResult();

	ft_memmove(dest, str3, 5);
	if (tester_strncmp(dest, "12345", 6)) check = 1;
	printResult();

	ft_memmove(str4, str4, 5);
	if (tester_strncmp(str4, "123456789", 10)) check = 1;
	printResult();
	printf("\n");
}

void memSet() {
	char	str[20] = "test me if you can";

	printf("ft_memset:    ");
	ft_memset(str, '*', 5);
	if (tester_strncmp(str, "*****", 5)) check = 1;
	printResult();

	ft_memset(str, '$', 8);
	if (tester_strncmp(str, "$$$$$$$$", 8)) check = 1;
	printResult();

	ft_memset(str, '#', 12);
	if (tester_strncmp(str, "############", 12)) check = 1;
	printResult();

	ft_memset(str, '\0', 16);
	if (tester_strncmp(str, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 16)) check = 1;
	printResult();
	printf("\n");
}

void strChr() {
	char 	str[] = "Tabula Rasa";
	char 	to_find = 'l';
	char	to_find2 = 'u';
	char	to_find3 = 'b';
	char	to_find4 = 'a';
	char	*dest;

	printf("ft_strchr:    ");
	dest = ft_strchr(str, to_find);
	if (tester_strncmp(dest, "la Rasa", 8)) check = 1;
	printResult();

	dest = ft_strchr(str, to_find2);
	if (tester_strncmp(dest, "ula Rasa", 9)) check = 1;
	printResult();

	dest = ft_strchr(str, to_find3);
	if (tester_strncmp(dest, "bula Rasa", 10)) check = 1;
	printResult();

	dest = ft_strchr(str, to_find4);
	if (tester_strncmp(dest, "abula Rasa", 11)) check = 1;
	printResult();
	printf("\n");
}

void strDup() {
	char	str[20] = "123456789";
	char	str2[20] = "abcdefghi";
	char	str3[20] = "ABCDEFGHI";
	char	str4[20] = "!@#$^&*()";
	char	*dest;

	printf("ft_strdup:    ");
	dest = ft_strdup(str);
	if (tester_strncmp(dest, "123456789", 10)) check = 1;
	printResult();
	free(dest);

	dest = ft_strdup(str2);
	if (tester_strncmp(dest, "abcdefghi", 10)) check = 1;
	printResult();
	free(dest);

	dest = ft_strdup(str3);
	if (tester_strncmp(dest, "ABCDEFGHI", 10)) check = 1;
	printResult();
	free(dest);

	dest = ft_strdup(str4);
	if (tester_strncmp(dest, "!@#$^&*()", 10)) check = 1;
	printResult();
	free(dest);
	printf("\n");
}

void strLCat() {
	char str[20] = "i ";

	printf("ft_strlcat:   ");
	ft_strlcat(str, "don't know what i should write....", 5);
	if (!tester_strncmp(str, "i don't know what", 6)) check = 1;
	printResult();

	ft_strlcat(str, " know what i should write....", 5);
	if (!tester_strncmp(str, "i don't know what", 11)) check = 1;
	printResult();

	ft_strlcat(str, " what i should write....", 5);
	if (!tester_strncmp(str, "i don't know what", 16)) check = 1;
	printResult();

	ft_strlcat(str, " i should write....", 5);
	if (!tester_strncmp(str, "i don't know what i should", 21)) check = 1;
	printResult();
	printf("\n");
}

void strLCpy() {
	char	str[20] = "123456789";
	char	str2[20] = "abcdefghi";
	char	str3[20] = "ABCDEFGHI";
	char	str4[20] = "!@#$^&*()";
	char	dest[20] = "0";

	printf("ft_strlcpy:   ");
	ft_strlcpy(dest, str, 3);
	if (tester_strncmp(dest, "12", 3)) check = 1;
	printResult();

	ft_strlcpy(dest, str2, 5);
	if (tester_strncmp(dest, "abcd", 5)) check = 1;
	printResult();

	ft_strlcpy(dest, str3, 7);
	if (tester_strncmp(dest, "ABCDEF", 7)) check = 1;
	printResult();

	ft_strlcpy(dest, str4, 9);
	if (tester_strncmp(dest, "!@#$^&*(", 9)) check = 1;
	printResult();
	printf("\n");
}

void strLen() {
	printf("ft_strlen:    ");
	if(ft_strlen("Tabula Rasa") != 11) check = 1;
	printResult();

	if(ft_strlen("@#$^\t^&*\n") != 9) check = 1;
	printResult();

	if(ft_strlen("") != 0) check = 1;
	printResult();

	if(ft_strlen("     ") != 5) check = 1;
	printResult();
	printf("\n");
}

void strNCmp() {
	printf("ft_strncmp:   ");
	if (ft_strncmp("Tabula Rasa", "Tabula Rasa", 5)) check = 1;
	printResult();

	if (ft_strncmp("Tabula Rasa", "TabuLa Rasa", 5) <= 0) check = 1;
	printResult();

	if (ft_strncmp("Tabula Rasa", "Tabuda Rasa", 5) <= 0) check = 1;
	printResult();

	if (ft_strncmp("Tab", "Tabula Rasa", 5) >= 0) check = 1;
	printResult();

	if (ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8)) check = 1;
	printResult();
	printf("\n");
}





void strRChr() {
	char 	str[] = "Tabula Rasa";
	char 	to_find = 's';
	char	to_find2 = 'R';
	char	to_find3 = 'l';
	char	to_find4 = 'b';
	char	*dest;

	printf("ft_strrchr:   ");
	dest = ft_strrchr(str, to_find);
	if (tester_strncmp(dest, "sa", 3)) check = 1;
	printResult();

	dest = ft_strrchr(str, to_find2);
	if (tester_strncmp(dest, "Rasa", 5)) check = 1;
	printResult();

	dest = ft_strrchr(str, to_find3);
	if (tester_strncmp(dest, "la Rasa", 8)) check = 1;
	printResult();

	dest = ft_strrchr(str, to_find4);
	if (tester_strncmp(dest, "bula Rasa", 10)) check = 1;
	printResult();
	printf("\n");
}



void strNStr() {
	char 	str[] = "Tabula Rasa";
	char 	*to_find = "sa";
	char	*to_find2 = "Ras";
	char	*to_find3 = "la";
	char	*dest;

	printf("ft_strnstr:   ");
	dest = ft_strnstr(str, to_find, 12);
	if (tester_strncmp(dest, "sa", 3)) check = 1;
	printResult();

	dest = ft_strnstr(str, to_find2, 12);
	if (tester_strncmp(dest, "Rasa", 5)) check = 1;
	printResult();

	dest = ft_strnstr(str, to_find3, 6);
	if (tester_strncmp(dest, "la Rasa", 8)) check = 1;
	printResult();

	dest = ft_strnstr(str, to_find2, 5);
	if (dest) check = 1;
	printResult();
	printf("\n");
}



// Additional functions

void subStr() {
	char	*str = "get this part of the string";
	char	*str2 = NULL;
	char	*dest;

	printf("ft_substr:    ");
	dest = ft_substr(str, 4, 4);
	if (tester_strncmp(dest, "this", 4)) check = 1;
	printResult();
	free(dest);

	dest = ft_substr(str, 9, 4);
	if (tester_strncmp(dest, "part", 4)) check = 1;
	printResult();
	free(dest);

	dest = ft_substr(str, 14, 2);
	if (tester_strncmp(dest, "of", 4)) check = 1;
	printResult();
	free(dest);

	dest = ft_substr(str2, 4, 4);
	if (dest) check = 1;
	printResult();
	free(dest);
	printf("\n");
}

void strJoin() {
	char	*str = "I ";
	char	*str2 = NULL;
	char	*dest;

	printf("ft_strjoin:   ");
	dest = ft_strjoin(str, "always");
	if (tester_strncmp(dest, "I always", 9)) check = 1;
	printResult();
	free(dest);

	str = "I always";
	dest = ft_strjoin(str, " get");
	if (tester_strncmp(dest, "I always get", 13)) check = 1;
	printResult();
	free(dest);

	str = "I always get";
	dest = ft_strjoin(str, " longer");
	if (tester_strncmp(dest, "I always get longer", 20)) check = 1;
	printResult();
	free(dest);

	dest = ft_strjoin(str2, "test");
	if (dest) check = 1;
	printResult();
	free(dest);
	printf("\n");
}

void strTrim() {
	char	*str = "  \t \t \n   \n\n\n\t";
	char	*str2 = "  \t \t \n Hello \t  Please\n Trim me ! \n\n\n\t";
	char	*str3 = " Just for tests ";
	char	*str4 = NULL;
	char	*dest;

	printf("ft_strtrim:   ");
	dest = ft_strtrim(str, " \n\t");
	if (tester_strncmp(dest, "", 1)) check = 1;
	printResult();
	free(dest);

	str = "I always";
	dest = ft_strtrim(str2, " \n\t");
	if (tester_strncmp(dest, "Hello \t  Please\n Trim me !", 27)) check = 1;
	printResult();
	free(dest);

	str = "I always get";
	dest = ft_strtrim(str3, "");
	if (tester_strncmp(dest, " Just for tests ", 20)) check = 1;
	printResult();
	free(dest);

	dest = ft_strtrim(str4, " \n\t");
	if (dest) check = 1;
	printResult();
	free(dest);
	printf("\n");
}

void Split() {
	char *s = "Hello World i'm a string";
	char **t = ft_split(s, ' ');
	char **dest = ft_split(NULL, ' ');
	
	printf("ft_split:     ");
	if (tester_strncmp(t[0], "Hello", 6)) check = 1;
	printResult();

	if (tester_strncmp(t[1], "World", 6)) check = 1;
	printResult();

	if (tester_strncmp(t[2], "i'm", 4)) check = 1;
	printResult();

	if (tester_strncmp(t[3], "a", 2)) check = 1;
	printResult();

	if (tester_strncmp(t[4], "string", 6)) check = 1;
	printResult();

	if (dest) check = 1;
	printResult();
	int	i = 0;
	while (i < 5)
		free(t[i++]);
	free(t);
	printf("\n");
}

void iToA() {
	char	*dest;
	
	printf("ft_itoa:      ");
	dest = ft_itoa(+345);
	if (tester_strncmp(dest, "345", 4)) check = 1;
	printResult();
	free(dest);

	dest = ft_itoa(-345);
	if (tester_strncmp(dest, "-345", 5)) check = 1;
	printResult();
	free(dest);

	dest = ft_itoa(-2147483648);
	if (tester_strncmp(dest, "-2147483648", 12)) check = 1;
	printResult();
	free(dest);

	dest = ft_itoa(0);
	if (tester_strncmp(dest, "0", 2)) check = 1;
	printResult();
	free(dest);
	printf("\n");
}

void strMapi() {
	char	*src = NULL;
	char	*dest;
	
	printf("ft_strmapi:   ");
	dest = ft_strmapi("abcdefghij", mapitest);
	if (tester_strncmp(dest, "AbCdEfGhIj", 11)) check = 1;
	printResult();
	free(dest);

	dest = ft_strmapi("ABC123", mapitest);
	if (tester_strncmp(dest, "AbC123", 7)) check = 1;
	printResult();
	free(dest);

	dest = ft_strmapi("@#$%^&", mapitest);
	if (tester_strncmp(dest, "@#$%^&", 7)) check = 1;
	printResult();
	free(dest);

	dest = ft_strmapi(src, mapitest);
	if (dest) check = 1;
	printResult();
	free(dest);
	printf("\n");
}

void iteritest(unsigned int i, char *c) {
	if (i % 2 == 0 && c)
		*c = toupper(*c);
}

void strIteri(){
	char	str[20] = "abcdefghij";
	char	str2[20] = "aBcDeFgHiJ";
	char	str3[20] = "@#$%^&";
	char	*src = NULL;
	
	printf("ft_striteri:  ");
	ft_striteri(str, iteritest);
	if (tester_strncmp(str, "AbCdEfGhIj", 11)) check = 1;
	printResult();

	ft_striteri(str2, iteritest);
	if (tester_strncmp(str2, "ABCDEFGHIJ", 11)) check = 1;
	printResult();

	ft_striteri(str3, iteritest);
	if (tester_strncmp(str3, "@#$%^&", 7)) check = 1;
	printResult();

	ft_striteri(src, iteritest);
	if (src) check = 1;
	printResult();
	printf("\n");
}

void putChar_fd() {
	int		fd[2];
	int		end;
	char	c[1];

	pipe(fd);
	printf("ft_putchar_fd:");
	ft_putchar_fd('h', fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 1);
	c[end] = '\0';
	if (c[0] != 'h') check = 1;
	printResult();
	close(fd[0]);

	pipe(fd);
	ft_putchar_fd('#', fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 1);
	c[end] = '\0';
	if (c[0] != '#') check = 1;
	printResult();
	close(fd[0]);

	pipe(fd);
	ft_putchar_fd(0, fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 1);
	c[end] = '\0';
	if (c[0] != 0) check = 1;
	printResult();
	close(fd[0]);
	printf("\n");
}

void putEndl_fd() {
	int		fd[2];
	int		end;
	char	c[20];

	pipe(fd);
	printf("ft_putendl_fd:");
	ft_putendl_fd("hello", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 7);
	c[end] = '\0';
	if ((tester_strncmp(c, "hello\n", 7))) check = 1;
	printResult();
	close(fd[0]);

	pipe(fd);
	ft_putendl_fd("here is number 9", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 18);
	c[end] = '\0';
	if ((tester_strncmp(c, "here is number 9\n", 18))) check = 1;
	printResult();
	close(fd[0]);

	pipe(fd);
	ft_putendl_fd("", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 12);
	c[end] = '\0';
	if ((tester_strncmp(c, "\n", 13))) check = 1;
	printResult();
	close(fd[0]);
	printf("\n");
}

void putStr_fd() {
	int		fd[2];
	int		end;
	char	c[20];

	pipe(fd);
	printf("ft_putstr_fd: ");
	ft_putstr_fd("hello", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 7);
	c[end] = '\0';
	if ((tester_strncmp(c, "hello", 6))) check = 1;
	printResult();
	close(fd[0]);

	pipe(fd);
	ft_putstr_fd("here is number 9", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 18);
	c[end] = '\0';
	if ((tester_strncmp(c, "here is number 9", 17))) check = 1;
	printResult();
	close(fd[0]);

	pipe(fd);
	ft_putstr_fd("", fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 12);
	c[end] = '\0';
	if ((tester_strncmp(c, "", 12))) check = 1;
	printResult();
	close(fd[0]);
	printf("\n");
}

void putNbr_fd() {
	int		fd[2];
	int		end;
	char	c[5];

	pipe(fd);
	printf("ft_putnbr_fd: ");
	ft_putnbr_fd(9, fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 1);
	c[end] = '\0';
	if ((atoi(&c[0])) != 9) check = 1;
	printResult();
	close(fd[0]);

	pipe(fd);
	ft_putnbr_fd(-13, fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 3);
	c[end] = '\0';
	if ((atoi(&c[0])) != -13) check = 1;
	printResult();
	close(fd[0]);

	pipe(fd);
	ft_putnbr_fd(0, fd[1]);
	close(fd[1]);
	end = read(fd[0], c, 3);
	c[end] = '\0';
	if ((atoi(&c[0])) != 0) check = 1;
	printResult();
	close(fd[0]);
	printf("\n");
}

// Linked list functions

void Lst() {
	t_list	*lst;
	
	printf("ft_lstnew_fd:   ");
	lst = ft_lstnew("first");
	if ((tester_strncmp(lst->content, "first", 6))) check = 1;
	printResult();

	printf("\nft_lstadd_back: ");
	ft_lstadd_back(&lst, ft_lstnew("last"));
	if ((tester_strncmp(lst->next->content, "last", 5))) check = 1;
	printResult();

	printf("\nft_lstadd_front:");
	ft_lstadd_front(&lst, ft_lstnew("new first"));
	if ((tester_strncmp(lst->content, "new first", 10))) check = 1;
	printResult();

	printf("\nft_lstsize:     ");
	int size = ft_lstsize(lst);
	if (size != 3) check = 1;
	printResult();

	printf("\nft_lstlast:     ");
	t_list *last = ft_lstlast(lst);
	if ((tester_strncmp(last->content, "last", 10))) check = 1;
	printResult();

	printf("\nft_lstdelone:   ");
	t_list *del_test = ft_lstnew(ft_strdup("del"));
	if (!del_test) check = 1;
	ft_lstdelone(del_test, free);
	printResult();

	printf("\nft_lstclear:    ");
	t_list *clear_test = ft_lstnew(ft_strdup("1"));
	ft_lstadd_back(&clear_test, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&clear_test, ft_lstnew(ft_strdup("3")));
	ft_lstclear(&clear_test, free);
	if (clear_test != NULL) check = 1;
	printResult();

	printf("\nft_lstiter:     ");
	t_list *iter_test = ft_lstnew(ft_strdup("abc"));
	ft_lstiter(iter_test, my_iter);
	if (tester_strncmp(iter_test->content, "ABC", 4)) check = 1;
	printResult();
	ft_lstdelone(iter_test, free);
	
	printf("\nft_lstmap:      ");
	t_list *map_test = ft_lstnew(ft_strdup("111"));
	ft_lstadd_back(&map_test, ft_lstnew(ft_strdup("222")));
	t_list *mapped = ft_lstmap(map_test, &my_map, &del_map);
	if (!mapped) check = 1;
	else if (tester_strncmp(mapped->content, "11", 3) == 0 && tester_strncmp(mapped->next->content, "22", 3) == 0);
	else check = 1;
	printResult();
	ft_lstclear(&map_test, del_map);
	ft_lstclear(&mapped, del_map);
	printf("\n");
}

int	main() {
	printf("\nLibc functions:\n");
	isAlnum();
	isAlpha();
	isAscii();
	isDigit();
	isPrint();
	toLower();
	toUpper();
	aToI();
	bZero();
	Calloc();
	memChr();
	memCmp();
	memCpy();
	memMove();
	memSet();
	strChr();
	strDup();
	strLCat();
	strLCpy();
	strLen();
	strNCmp();
	strNStr();
	strRChr();
	printf("\nAdditional functions:\n");
	iToA();
	Split();
	strIteri();
	strJoin();
	strMapi();
	strTrim();
	subStr();
	putChar_fd();
	putEndl_fd();
	putNbr_fd();
	putStr_fd();
	printf("\nLinked list functions:\n");
	Lst();
	return 0;
}

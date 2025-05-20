/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:20:25 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/20 14:43:38 by bschwarz         ###   ########.fr       */
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
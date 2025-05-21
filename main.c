/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 12:18:23 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/21 15:14:02 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

int	main()
{
	printf("\nLibc functions:\n");
	testisalpha();
	testisdigit();
	testisalnum();
	testisascii();
	testisprint();
	teststrlen();
	testmemset();
	testbzero();
	testmemcpy();
	testmemmove();
	teststrlcpy();
	teststrlcat();
	testtoupper();
	testtolower();
	teststrchr();
	teststrrchr();
	teststrncmp();
	testmemchr();
	testmemcmp();
	teststrnstr();
	testatoi();
	testcalloc();
	teststrdup();
	printf("\nAdditional functions:\n");
	testsubstr();
	teststrjoin();
	teststrtrim();
	testsplit();
	testitoa();
	teststrmapi();
	teststriteri();
	
	return 0;
}
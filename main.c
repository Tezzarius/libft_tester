/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 12:18:23 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 17:19:58 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

int	main()
{
	printf("Libc functions:\n");
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
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 12:18:23 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 20:47:04 by bschwarz         ###   ########.fr       */
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
	//testmemchr();
	return 0;
}
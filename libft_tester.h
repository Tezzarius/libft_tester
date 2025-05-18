/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 11:46:10 by bschwarz          #+#    #+#             */
/*   Updated: 2025/05/18 17:19:46 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TESTER_H
# define LIBFT_TESTER_H

#define RED		"\x1b[31m"
#define GREEN	"\x1b[32m"
#define RESET	"\x1b[0m"

# include "../libft.h"
#include <stdio.h>

int	tester_strncmp(const char *s1, const char *s2, size_t n);

void	testisalpha();
void	testisdigit();
void	testisalnum();
void	testisascii();
void	testisprint();
void	teststrlen();
void	testmemset();
void	testbzero();
void	testmemcpy();
void	testmemmove();
void	teststrlcpy();
void	teststrlcat();
void	testtoupper();
void	testtolower();
void	teststrchr();
void	teststrrchr();
void	teststrncmp();

#endif
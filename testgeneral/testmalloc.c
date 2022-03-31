/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosaroki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:43:40 by nosaroki          #+#    #+#             */
/*   Updated: 2022/03/30 17:09:30 by nosaroki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int *memoireAllouee = NULL;

	memoireAllouee = malloc(sizeof(int));
	(void) argc;
	(void) argv;
	if (memoireAllouee == NULL)
		exit (0);
	printf("Quel age avez-vous ?");
	scanf("%d", memoireAllouee);
	printf("Vous avez %d ans\n", *memoireAllouee);

	free(memoireAllouee);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davigome <davigome@studen.42malaga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:12:15 by davigome          #+#    #+#             */
/*   Updated: 2025/01/22 15:05:37 by davigome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1 && !s2)
		return (0);
	dst = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dst)
		return (0);
	while (s1[++i])
		dst[i] = s1[i];
	while (s2[++j])
		dst[i + j] = s2[j];
	dst [i + j] = 0;
	return (dst);
}

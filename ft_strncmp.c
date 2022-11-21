/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:38:41 by derblang          #+#    #+#             */
/*   Updated: 2022/11/08 15:26:49 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && (i < n - 1) && str1[i])
	i++;
	return (str1[i] - str2[i]);
}
/*int main()
{
    char *str1;
    char *str2;
    int size;
    str1 = "Hellooo";
    str2 = "Hello";
    size = 10;
    printf("%d\n", ft_strncmp(str1, str2, size));
    printf("%d\n", strncmp(str1, str2, size));
}*/

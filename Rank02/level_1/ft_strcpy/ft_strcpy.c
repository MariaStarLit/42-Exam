/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-avel <mde-avel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:36:35 by mde-avel          #+#    #+#             */
/*   Updated: 2023/06/05 16:58:14 by mde-avel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

// int main(void)
// {
//     char str[] = "Bunny";
//     char dest[20] = "Cute litte Puppeis!";

//     printf("minhaf: |%s|\n", ft_strcpy(dest, str));
//     printf("strcpy: |%s|\n", strcpy(dest, str));
// }
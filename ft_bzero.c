/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alromero <alromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:20:12 by agomez-o          #+#    #+#             */
/*   Updated: 2019/11/27 13:28:02 by alromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char*)str)[i] = 0;
		i++;
	}
}

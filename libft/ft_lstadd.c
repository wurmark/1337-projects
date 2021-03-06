/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 02:16:42 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 02:16:48 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!(ft_is_empty(*alst)))
	{
		new->next = *alst;
		*alst = new;
	}
	else
		*alst = new;
}

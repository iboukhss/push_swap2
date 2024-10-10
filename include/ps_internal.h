/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_internal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:46:09 by iboukhss          #+#    #+#             */
/*   Updated: 2024/10/10 15:49:11 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_INTERNAL_H
# define PS_INTERNAL_H

typedef struct s_ps_list	t_ps_list;

struct s_ps_list
{
	int			value;
	t_ps_list	*prev;
	t_ps_list	*next;
};

#endif

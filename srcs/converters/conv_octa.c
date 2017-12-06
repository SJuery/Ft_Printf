/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_octa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 23:42:04 by sjuery            #+#    #+#             */
/*   Updated: 2017/12/03 00:54:22 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

char	*conv_octa(t_printf *prtf)
{
	char	*dst;

	dst = ft_itoa_base(prtf->uvals.ulli, 8, 1);
	if (prtf->uvals.ulli && prtf->sharp)
		dst = ft_strjoin("0", dst);
	return (dst);
}

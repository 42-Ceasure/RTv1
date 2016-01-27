/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 04:51:04 by cglavieu          #+#    #+#             */
/*   Updated: 2016/01/27 06:13:54 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RTv1.h"

int		main(int ac, char **av)
{
	t_win *win;

	(void)ac;
	(void)av;
	win = (t_win *)malloc(sizeof(t_win));
	if (init_mlx(win) != 0)
	{
		write(1, "cannot intitialize MLX\n", 24);
		return (0);
	}
	return (0);
}

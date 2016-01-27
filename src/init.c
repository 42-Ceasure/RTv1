/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 04:53:31 by cglavieu          #+#    #+#             */
/*   Updated: 2016/01/27 06:20:31 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RTv1.h"

int	init_mlx(t_win *win)
{
	win->mlx = mlx_init();
	win->win = mlx_new_window(win->mlx, WIDTH, HEIGHT, NAME);
	win->img = mlx_new_image(win->mlx, WIDTH, HEIGHT);
	win->endian = 1;
	win->bpp = 4;
	win->s_line = WIDTH;
	win->data = mlx_get_data_addr(win->img, &(win->bpp), &(win->s_line), &(win->endian));
	mlx_key_hook(win->win, key_hook, win);
	// mlx_expose_hook(win->win, expose_hook, win);
	mlx_loop(win->mlx);
	return (0);
}

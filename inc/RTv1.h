#ifndef RTV1_H
# define RTV1_H

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
# include "libft/inc/libft.h"
# define WIDTH		800
# define HEIGHT		600
# define NAME		"RTv1"
# define KEY		w->event.key.keysym.sym
# define WHEEL		w->event.wheel
# define MOUSE		w->event.motion

typedef struct		s_win
{
	void			*mlx;
	void			*win;
	void			*img;
	int				endian;
	int				bpp;
	int				s_line;
	char			*data;
}					t_win;

int	init_mlx(t_win *win);
int key_hook(int keycode, t_win *win);

#endif

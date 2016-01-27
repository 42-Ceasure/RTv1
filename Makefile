# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/27 04:51:15 by cglavieu          #+#    #+#              #
#    Updated: 2016/01/27 06:09:52 by cglavieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, fclean, re

CC = gcc -g

CFLAG = -Wall -Wextra -Werror

NAME = RTv1

SRCDIR=		./src/
SRC=		main.c\
			init.c\
			hook.c

SRCFIL=		$(addprefix $(SRCDIR),$(SRC))

OBJ = $(SRC:.c=.o)
OBJDIR = ./obj/

LIBFT = ./inc/libft/

LIBFTEXE = $(LIBFT)libft.a

INC = ./inc/

INC_LIBFT = ./inc/libft/inc/

FLG = -lX11 -lmlx -lXext

all:    $(NAME)

$(NAME): $(addprefix $(OBJDIR),$(OBJ)) $(LIBFTEXE)
		@$(CC) $(CFLAG) -o $(NAME)\
		$(addprefix $(OBJDIR), $(OBJ)) -L $(LIBFT) -lft $(FLG)

$(OBJDIR)%.o: $(SRCDIR)%.c
		@mkdir -p $(OBJDIR)
		@$(CC) $(CFLAG) -I $(INC) -I  $(INC_LIBFT) -o $@ -c $<

$(LIBFTEXE): $(LIBFT)
		@make -k -s -C $(LIBFT)	

clean:	
		@rm -Rf  $(OBJ)
		@make -C $(LIBFT) clean

fclean: 
		@rm -Rf  $(OBJDIR)	
		@rm -f $(NAME)
		@make -C $(LIBFT) fclean

re:		fclean all

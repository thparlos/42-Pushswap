# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thparlos <thparlos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/12 14:53:21 by thparlos          #+#    #+#              #
#    Updated: 2019/10/12 17:04:50 by thparlos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH=./src/
SRC_NAME=ft_atoi.c\
ft_putchar.c\
ft_putnbr.c\
ft_putstr.c\
ft_putstrc.c\
ft_putstrn.c\
ft_strcmp.c\
ft_strlen.c\
check.c\
init.c\
main.c\
misc.c\
op.c\
pile_sort.c\
pile.c\
sort.c\

OBJ_PATH =./obj/
OBJ_NAME=$(SRC_NAME:.c=.o)
INC_PATH=./includes/
INC_NAME=libft.h\
		push_swap.h
SRC=$(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ=$(addprefix $(OBJ_PATH), $(OBJ_NAME))
INCF=$(addprefix $(INC_PATH), $(INC_NAME))
INC=$(addprefix -I, $(INC_PATH))
CFLAGS=-Wall -Wextra -Werror
CC=-gcc
NAME=push_swap

all: $(NAME)

$(NAME):$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -rf $(NAME)

re: fclean all clean

.PHONY: all clean fclean re
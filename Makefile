# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 19:07:44 by rkamkoum          #+#    #+#              #
#    Updated: 2025/12/21 23:00:22 by rkamkoum         ###   ####lausanne.ch    #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_itoa.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c		\
		ft_memset.c		\
		ft_putchar_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_putstr_fd.c		\
		ft_split.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_striteri.c		\
		ft_strjoin.c		\
		ft_strlcat.c		\
		ft_strlcpy.c		\
		ft_strlen.c		\
		ft_strmapi.c		\
		ft_strncmp.c		\
		ft_strnstr.c		\
		ft_strrchr.c		\
		ft_strtrim.c		\
		ft_substr.c		\
		ft_tolower.c		\
		ft_toupper.c

SRCS_BONUS =	ft_lstnew.c		\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c 	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c
 

NAME = libft.a

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "libft done !"

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)
	@echo "libft bonus done !"

%.o : %.c libft.h
	@echo "Compiling.."
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

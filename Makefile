# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkamkoum <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 19:07:44 by rkamkoum          #+#    #+#              #
#    Updated: 2025/12/24 23:55:03 by rkamkoum         ###   ####lausanne.ch    #
#                                                                              #
# **************************************************************************** #

# Variables

NAME			= libft.a

INCLUDE			= includes/
SRC_DIR			= src/
OBJ_DIR			= obj/

CC			= cc
CFLAGS			= -Wall -Wextra -Werror -I
RM			= rm -f
AR			= ar rcs

# Sources

FUNCTS_TO_DIR		= ft_to/
FUNCTS_TO		= ft_atoi ft_itoa ft_tolower ft_toupper

FUNCTS_MEM_DIR		= ft_mem/
FUNCTS_MEM		= ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy	\
			ft_memmove ft_memset

FUNCTS_IS_DIR		= ft_is/
FUNCTS_IS		= ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FUNCTS_PUT_DIR		= ft_put/
FUNCTS_PUT		= ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

FUNCTS_STR_DIR		= ft_str/
FUNCTS_STR		= ft_split ft_strchr ft_strdup ft_striteri ft_strjoin	\
			ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp	\
			ft_strnstr ft_strrchr ft_strtrim ft_substr

FUNCTS_LST_DIR		= ft_lst/
FUNCTS_LST		= ft_lstnew ft_lstadd_front ft_lstadd_back ft_lstlast	\
			ft_lstsize ft_lstdelone ft_lstclear ft_lstmap ft_lstiter

FUNCTS_PRINTF_DIR	= ft_printf/
FUNCTS_PRINTF		= ft_printf ft_print_char ft_print_str ft_print_p	\
			ft_print_d_i ft_print_u ft_print_x

FUNCTS_GNL_DIR		= get_next_line/
FUNCTS_GNL		= get_next_line

SRC_FILES+=$(addprefix $(FUNCTS_TO_DIR),$(FUNCTS_TO))
SRC_FILES+=$(addprefix $(FUNCTS_MEM_DIR),$(FUNCTS_MEM))
SRC_FILES+=$(addprefix $(FUNCTS_IS_DIR),$(FUNCTS_IS))
SRC_FILES+=$(addprefix $(FUNCTS_PUT_DIR),$(FUNCTS_PUT))
SRC_FILES+=$(addprefix $(FUNCTS_STR_DIR),$(FUNCTS_STR))
SRC_FILES+=$(addprefix $(FUNCTS_LST_DIR),$(FUNCTS_LST))
SRC_FILES+=$(addprefix $(FUNCTS_PRINTF_DIR),$(FUNCTS_PRINTF))
SRC_FILES+=$(addprefix $(FUNCTS_GNL_DIR),$(FUNCTS_GNL))

SRC		= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ		= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJSF		= .cache_exists

###

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\n\nmandatory | linked lists | ft_printf | get_next_line: Compiled.\n"	
	@echo "libft: Ready!"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJSF)
#	@printf "Compiling %-50s\r" $<
	@printf "."
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJSF):
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)$(FUNCTS_TO_DIR)
	@mkdir -p $(OBJ_DIR)$(FUNCTS_MEM_DIR)
	@mkdir -p $(OBJ_DIR)$(FUNCTS_IS_DIR)
	@mkdir -p $(OBJ_DIR)$(FUNCTS_PUT_DIR)
	@mkdir -p $(OBJ_DIR)$(FUNCTS_STR_DIR)
	@mkdir -p $(OBJ_DIR)$(FUNCTS_LST_DIR)
	@mkdir -p $(OBJ_DIR)$(FUNCTS_PRINTF_DIR)
	@mkdir -p $(OBJ_DIR)$(FUNCTS_GNL_DIR)
	@printf "libft: Compiling "

clean:
	@$(RM) -r $(OBJ_DIR)
	@$(RM) $(OBJSF)
	@echo "libft: object files cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "libft: executables cleaned"

re: fclean all
	@echo "libft: clean + rebuild done"

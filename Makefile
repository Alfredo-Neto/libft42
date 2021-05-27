# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 02:25:47 by ade-agui          #+#    #+#              #
#    Updated: 2021/05/27 08:48:48 by ade-agui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC  =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c

# SRC  =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
# 		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
# 		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
# 		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c	ft_isprint.c \
# 		ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
# 		ft_substr.c	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c	\
# 		ft_putchar_fd.c	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
		
# SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
# 			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(subst .c,.o,$(SRC))

OBJ_BONUS = $(subst .c,.o,$(SRC_BONUS))

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@gcc -Wall -Wextra -Werror main.c -L. -lft -lbsd
	@ranlib $(NAME)

bonus: $(OBJ_BONUS)

$(OBJ_BONUS):
	@gcc -Wall -Wextra -Werror -c $(SRC) $(SRC_BONUS)
	@ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@/bin/rm -f $(NAME) a.out
	
re: fclean all

.PHONY: clean fclean all re bonus
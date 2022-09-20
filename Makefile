# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 13:14:18 by lfarias-          #+#    #+#              #
#    Updated: 2022/09/19 20:55:45 by lfarias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra
SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
				ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
				ft_isspace.c ft_ispunct.c ft_islower.c ft_isupper.c ft_iscntrl.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
				ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
				ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

GNL_SRCS	=	get_next_line.c get_next_line_utils.c

BONUSES		=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
				ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJS		=	$(SRCS:.c=.o)
GNL_OBJS	=	$(GNL_SRCS:.c=.o)
PF_OBJS		=	$(PF_SRCS:.c=.o)
BOBJS		=	$(BONUSES:.c=.o)
LIBFT		=	ar -rcs
INCLUDES	=	.

$(NAME): $(OBJS) $(GNL_OBJS)
	$(LIBFT) $(NAME) $(OBJS) $(GNL_OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(GNL_OBJS) $(PF_OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME)
	$(CC) $(CFLAGS) -I$(INCLUDES) $(BONUSES)
	ar -qs $(NAME) $(BOBJS)

.PHONY:
	all clean fclean re bonus

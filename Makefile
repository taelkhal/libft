# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 10:42:43 by taelkhal          #+#    #+#              #
#    Updated: 2022/11/01 23:04:07 by taelkhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRCSBS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c

OBJSBS = $(SRCSBS:.c=.o)

OBJS = $(SRCS:.c=.o)
all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)
$(OBJS) :
		$(CC) $(CFLAGS) -c $(SRCS)
bonus : $(OBJSBS)
$(OBJSBS) :
		$(CC) $(CFLAGS) -c $(SRCSBS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJSBS)
clean : 
	rm -rf $(OBJS)
	rm -rf $(OBJSBS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
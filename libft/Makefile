# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlanzilo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/16 15:26:16 by dlanzilo          #+#    #+#              #
#    Updated: 2021/01/18 12:26:39 by dlanzilo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB1 = ar -rcs
LIB2 = ranlib
RM = /bin/rm -f
NAME = libft.a
INCLUDE = libft.h
SRCS = ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strstr.c ft_strrchr.c ft_atoi.c\
	   ft_isalpha.c ft_isdigit.c ft_strncmp.c ft_strnstr.c ft_isalnum.c\
	   ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c ft_memcpy.c\
	   ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c\
	   ft_strjoin.c ft_strtrim.c  ft_itoa.c ft_split.c ft_putchar_fd.c\
	   ft_putstr_fd.c ft_putnbr_fd.c ft_memccpy.c ft_memmove.c ft_putendl_fd.c\
	   ft_strncpy.c ft_strmapi.c

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
	   ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c\
	   ft_lstmap.c
 

OBJS = $(SRCS:.c=.o)

OBJSBONUS = ${SRCS_B:.c=.o}

all:		$(NAME)
$(NAME):	$(OBJS) $(INCLUDE)
					$(LIB1) $(NAME) $(OBJS)
					$(LIB2) $(NAME)

.c.o:
		$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)


clean:
		$(RM) $(OBJS)

fclean: clean
			$(RM) $(NAME)

re:	fclean all

bonus:		${OBJSBONUS}
			$(LIB1) ${NAME} ${OBJSBONUS}

rebonus: clean 
			$(RM) $(OBJSBONUS) $(NAME)

.PHONY:		all clean fclean re bonus rebonus 

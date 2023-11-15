# **************************************************************************** #
#																			  #
#														 :::	  ::::::::	#
#	Makefile										   :+:	  :+:	:+:	#
#													 +:+ +:+		 +:+	  #
#	By: mapale <mapale@42.fr>					  +#+  +:+	   +#+		 #
#												 +#+#+#+#+#+   +#+			#
#	Created: 2023/11/09 16:53:06 by mapale			#+#	#+#			  #
#	Updated: 2023/11/09 17:24:21 by mapale		   ###   ########.fr		#
#																			  #
# **************************************************************************** #

NAME			=	libft.a
CC				=	cc
CFLAGS			=	-Wall -Werror -Wextra
HEADER_FILE		=	libft.h
SRCS			=	ft_atoi.c		\
					ft_bzero.c		\
					ft_calloc.c		\
					ft_isalnum.c	\
					ft_isalpha.c	\
					ft_isascii.c	\
					ft_isdigit.c	\
					ft_isprint.c	\
					ft_itoa.c		\
					ft_memchr.c		\
					ft_memcmp.c		\
					ft_memcpy.c		\
					ft_memmove.c	\
					ft_memset.c		\
					ft_putchar_fd.c	\
					ft_putendl_fd.c	\
					ft_putnbr_fd.c	\
					ft_putstr_fd.c	\
					ft_split.c		\
					ft_strchr.c		\
					ft_strdup.c		\
					ft_striteri.c	\
					ft_strjoin.c	\
					ft_strlcat.c	\
					ft_strlcpy.c	\
					ft_strlen.c		\
					ft_strmapi.c	\
					ft_strncmp.c	\
					ft_strnstr.c	\
					ft_strrchr.c	\
					ft_strtrim.c	\
					ft_substr.c		\
					ft_tolower.c	\
					ft_toupper.c	\

SRCS_BONUS		=	ft_lstnew.c			\
					ft_lstsize.c		\
					ft_lstlast.c		\
					ft_lstadd_front.c	\
					ft_lstadd_back.c	\
					ft_lstdelone.c		\
					ft_lstclear.c		\
					ft_lstiter.c		\
					ft_lstmap.c			\

OBJS			=	$(SRCS:.c=.o)
OBJS_BONUS		=	$(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

bonus:
	$(MAKE) $(NAME) SRCS="$(SRCS) $(SRCS_BONUS)"

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
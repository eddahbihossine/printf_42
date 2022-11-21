# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 02:20:46 by heddahbi          #+#    #+#              #
#    Updated: 2022/11/21 06:14:29 by heddahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c ft_putchar_n_count.c \
					ft_puthexa_ncount.c ft_putstr_n_count.c\
					ft_putnbr_n_count.c ft_putunnbr_n_count.c

OBJS			= $(SRCS:.c=.o)


CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror 
NAME			= printf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)
%.o: %.c 
	$(CC) $(CFLAGS) -c $<
clean:
				 $(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


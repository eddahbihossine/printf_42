# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heddahbi <heddahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 02:20:46 by heddahbi          #+#    #+#              #
#    Updated: 2024/08/14 07:03:49 by heddahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	$(wildcard srcs/*.c)

OBJS			= $(SRCS:.c=.o)


CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror 
NAME			= printf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS) 
				ranlib $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all


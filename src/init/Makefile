# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 17:03:41 by yquaro            #+#    #+#              #
#    Updated: 2020/01/20 12:33:42 by yquaro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../../includes/push_swap.mk

HEADER_H = -I ../../includes/

DIR_O = ../../lib
SOURCES = stack.c psstk.c debug.c chunk.c error_processing.c

OBJECTS = $(addprefix $(DIR_O)/,$(patsubst %.c,%.o,$(SOURCES)))

all: print $(OBJECTS)

print:
	@echo \*\*\* Compiling init files

$(DIR_O)/%.o: %.c
	$(COMPILING) $< -o $@
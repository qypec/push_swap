# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yquaro <yquaro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 10:48:36 by yquaro            #+#    #+#              #
#    Updated: 2019/12/03 21:54:41 by yquaro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../../includes/libft.mk

LIBFT_H = -I ../../includes/
CTIME_H = -I ../
COMPILING = $(CC) $(CFLAGS) $(LIBFT_H) $(CTIME_H)

DIR_O = ../../lib
SOURCES = hashfunc.c print_htab.c htab.c map_reindexing.c
OBJECTS = $(addprefix $(DIR_O)/,$(patsubst %.c,%.o,$(SOURCES)))

all: $(OBJECTS)
	@true

$(DIR_O)/%.o: %.c
	@$(COMPILING) $< -o $@

clean:
	@rm -f ../../lib/$(OBJECTS)

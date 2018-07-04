##
## EPITECH PROJECT, 2018
## vec
## File description:
## Makefile
##

CC		=	gcc

NAME		=	libvec.a

SRCDIR		=	src
OBJDIR		=	build

FILES		=	lvec_new			\
			lvec_with_capacity		\
			lvec_clone			\
			lvec_clear			\
			lvec_drop			\
			lvec_size			\
			lvec_capacity			\
			lvec_at				\
			lvec_set			\
			lvec_front			\
			lvec_back			\
			lvec_push_front			\
			lvec_pop_front			\
			lvec_push_back			\
			lvec_pop_back			\
			lvec_insert			\
			lvec_remove			\
			lvec_filter			\
			lvec_reduce			\
			lvec_for_each			\
			lvec_sort			\
			lvec_reverse			\
			lvec_index_of			\
			lvec_last_index_of		\
			lvec_find_index			\
			lvec_find_last_index		\
			lvec_find			\
			lvec_find_last			\
			lvec_shrink_to_fit		\
			internal_lvec_grow

SORTEDFILES	=	$(sort $(FILES))
SRCS		=	$(SORTEDFILES:%=$(SRCDIR)/%.c)
OBJS		=	$(SORTEDFILES:%=$(OBJDIR)/%.o)

CFLAGS 		=	-W -Wall -Wextra -Wunused -Wuninitialized
LDFLAGS		=

DIRS		=

SORTEDDIRS	=	$(sort $(DIRS))
SRCDIRS		=	$(SORTEDDIRS:%=$(SRCDIR)/%)
OBJDIRS		=	$(SORTEDDIRS:%=$(OBJDIR)/%)

REDDARK 	=       \033[31;2m
RED     	=       \033[31;1m
GREEN   	=       \033[32;1m
YEL     	=       \033[33;1m
BLUE    	=       \033[34;1m
PINK    	=       \033[35;1m
CYAN    	=       \033[36;1m
RES     	=       \033[0m

all:	$(NAME)

$(NAME):	$(OBJDIR) $(OBJDIRS) $(OBJS)
		@echo -e "[$(RED)LINKING$(RES)] $(YEL)$(OBJDIR)/*.o$(RES) $(BLUE)=>$(RES) $(YEL)$(NAME)$(RES)"
		@ar rc $(NAME) $(OBJS) $(LDFLAGS)

clean:
	@rm -rf $(OBJDIR)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
	@echo -e "[$(RED)COMPILE$(RES)] $(YEL)$<$(RES) $(BLUE)=>$(RES) $(YEL)$@$(RES)"
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	@echo -e "[$(RED)MKDIR$(RES)] $(YEL)build$(RES)"
	@mkdir -p $@

$(OBJDIR)/%:
	@echo -e "[$(RED)MKDIR$(RES)] $(YEL)$@$(RES)"
	@mkdir -p $@

##
## EPITECH PROJECT, 2018
## vec
## File description:
## Makefile
##

CC		=	gcc

BINDIR		=	bin
SRCDIR		=	src
OBJDIR		=	build

FILES		=	simple_new			\
			simple_with_capacity

SORTEDFILES	=	$(sort $(FILES))
BINS		=	$(SORTEDFILES:%=$(BINDIR)/%)
SRCS		=	$(SORTEDFILES:%=$(SRCDIR)/%.c)
OBJS		=	$(SORTEDFILES:%=$(OBJDIR)/%.o)

CFLAGS 		=	-W -Wall -Wextra -Wunused -Wuninitialized -I../src
LDFLAGS		=	-L.. -lvec

DIRS		=

SORTEDDIRS	=	$(sort $(DIRS))
BINDIRS		=	$(SORTEDDIRS:%=$(BINDIR)/%)
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

all:	$(BINDIR) $(BINDIRS) $(OBJDIR) $(OBJDIRS) $(BINS) $(OBJS)

clean:
	@rm -rf $(OBJDIR)

fclean:	clean
	@rm -rf $(BINDIR)

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

$(BINDIR)/%:	$(OBJDIR)/%.o
	@echo -e "[$(RED)LINK$(RES)] $(YEL)$<$(RES) $(BLUE)=>$(RES) $(YEL)$@$(RES)"
	@$(CC) -o $@ $< $(LDFLAGS)

$(BINDIR):
	@echo -e "[$(RED)MKDIR$(RES)] $(YEL)build$(RES)"
	@mkdir -p $@

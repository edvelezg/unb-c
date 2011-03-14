# Wedit Makefile for project stack
SRCDIR=c:\users\unbsj\unb-c\stack
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	stack.obj

LIBS=
EXE=stack.lib

$(EXE):	$(OBJS) Makefile
	$(LCCROOT)\bin\lcclib.exe /OUT:c:\users\unbsj\unb-c\stack\lcc\stack.lib $(OBJS)

# Build stack.c
STACK_C=\
	$(SRCDIR)\stack.h\

stack.obj: $(STACK_C) $(SRCDIR)\stack.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\stack.c

link:
	$(LCCROOT)\bin\lcclib.exe /OUT:c:\users\unbsj\unb-c\stack\lcc\stack.lib $(OBJS)

clean:
	del $(OBJS) stack.lib

# Wedit Makefile for project lab11int
SRCDIR=c:\users\unbsj\unb-c\lab11inttree
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	lab11inttree.obj

LIBS=cslib.lib
EXE=lab11int.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab11int.exe $(OBJS) $(LIBS)

# Build lab11inttree.c
LAB11INTTREE_C=\

lab11inttree.obj: $(LAB11INTTREE_C) $(SRCDIR)\lab11inttree.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\lab11inttree.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab11int.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) lab11int.exe

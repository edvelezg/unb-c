# Wedit Makefile for project Lab10
SRCDIR=c:\users\unbsj\unb-c\lab10
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	rpncalc.obj

LIBS=cslib.lib stack.lib
EXE=lab10.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab10.exe $(OBJS) $(LIBS)

# Build rpncalc.c
RPNCALC_C=\
	$(SRCDIR)\stack.h\

rpncalc.obj: $(RPNCALC_C) $(SRCDIR)\rpncalc.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\rpncalc.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab10.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) lab10.exe

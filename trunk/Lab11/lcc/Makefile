# Wedit Makefile for project Lab11
SRCDIR=c:\users\unbsj\unb-c\lab11
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	lab-mar-22.obj

LIBS=cslib.lib
EXE=lab11.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab11.exe $(OBJS) $(LIBS)

# Build lab-mar-22.c
LAB-MAR-22_C=\

lab-mar-22.obj: $(LAB-MAR-22_C) $(SRCDIR)\lab-mar-22.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\lab-mar-22.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab11.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) lab11.exe

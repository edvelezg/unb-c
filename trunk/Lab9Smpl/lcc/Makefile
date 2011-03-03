# Wedit Makefile for project Lab9Smpl
SRCDIR=c:\users\unbsj\unb-c\lab9smpl
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	feb22.obj

LIBS=cslib.lib
EXE=lab9smpl.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab9smpl.exe $(OBJS) $(LIBS)

# Build feb22.c
FEB22_C=\

feb22.obj: $(FEB22_C) $(SRCDIR)\feb22.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\feb22.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab9smpl.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) lab9smpl.exe

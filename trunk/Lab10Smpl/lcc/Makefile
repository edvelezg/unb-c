# Wedit Makefile for project Lab10Smpl
SRCDIR=c:\users\unbsj\unb-c\lab10smpl
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	lab10smpl.obj

LIBS=stack.lib cslib.lib
EXE=lab10smpl.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab10smpl.exe $(OBJS) $(LIBS)

# Build lab10smpl.c
LAB10SMPL_C=\
	$(SRCDIR)\stack.h\

lab10smpl.obj: $(LAB10SMPL_C) $(SRCDIR)\lab10smpl.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\lab10smpl.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab10smpl.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) lab10smpl.exe

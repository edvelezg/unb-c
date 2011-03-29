# Wedit Makefile for project Lab12Smpl
SRCDIR=c:\users\unbsj\unb-c\lab12smpl
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	lab12smpl.obj

LIBS=cslib.lib
EXE=lab12smpl.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab12smpl.exe $(OBJS) $(LIBS)

# Build lab12smpl.c
LAB12SMPL_C=\

lab12smpl.obj: $(LAB12SMPL_C) $(SRCDIR)\lab12smpl.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\lab12smpl.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc\lab12smpl.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) lab12smpl.exe

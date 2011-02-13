# Wedit Makefile for project Lab6
SRCDIR=c:\users\unbsj\unb-c\lab6
CFLAGS=-I"C:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	lab6.obj

LIBS=
EXE=Debug\lab6.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\Debug\lab6.exe $(OBJS) $(LIBS)

# Build lab6.c
LAB6_C=\
	c:\lcc\include\_syslist.h\
	c:\lcc\include\tgmath.h\

lab6.obj: $(LAB6_C) $(SRCDIR)\lab6.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\lab6.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\Debug\lab6.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) Debug\lab6.exe

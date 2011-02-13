# Wedit Makefile for project Lab6
SRCDIR=c:\users\unbsj\unb-c\Lab6
CFLAGS=-I"C:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	Lab6Val.obj

LIBS=
EXE=Debug\Lab6Val.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\Debug\Lab6Val.exe $(OBJS) $(LIBS)

# Build Lab6Val.c
LAB6_C=\
	c:\lcc\include\_syslist.h\
	c:\lcc\include\tgmath.h\

Lab6Val.obj: $(LAB6_C) $(SRCDIR)\Lab6Val.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\Lab6Val.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\Debug\Lab6Val.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) Debug\Lab6Val.exe

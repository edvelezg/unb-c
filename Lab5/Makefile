# Wedit Makefile for project Lab5
LCCROOT=C:\lcc
SRCDIR=C:\Users\UNBSJ\unb-c\Lab5
CFLAGS=-I"C:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	Lab5.obj

LIBS=cslib.lib
EXE=Lab5.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\Lab5.exe $(OBJS) $(LIBS)

# Build Lab5.c
HELLO_C=\
	C:\lcc\include\stdio.h\
	C:\lcc\include\safelib.h\
	C:\lcc\include\simpio.h\
	C:\lcc\include\genlib.h\
	C:\lcc\include\stdio.h\

Lab5.obj: $(HELLO_C) $(SRCDIR)\Lab5.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\Lab5.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc1\Lab5.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) Lab5.exe

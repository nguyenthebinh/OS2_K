FC=gfortran 
CC=gcc
CP=cp

.PHONY: all clean

OBJS = mylib.o mylib_c.o

# Compiler flags
FFLAGS = −g −traceback −heap−arrays 10 \
	−I. −L/usr/lib64 −lGL −lGLU −lX11 −lXext

CFLAGS = −g −traceback −heap−arrays 10 \ 
	−I. −lGL −lGLU −lX11 −lXext

MAKEFLAGS = −W −w 

PRJ_BINS=hello
PRJ_OBJS = $(addsuffix.o,$(PRJ_BINS)) 

objects := $(PRJ_OBJS) $(OBJS)

all: myapp

%.o: %.f90
	$(FC) −D_MACHTYPE_LINUX $< −c −o $@
%.o: %.F
	$(FC) −D_MACHTYPE_LINUX $< −c −o $@
%.o: %.c
	$ (CC) −D_MACHTYPE_LINUX $< −c −o $@myapp: objects
	$(CC) $(CFLAGS) $^ $( objects )
−o $@clean:	@echo "Cleaning_up.." 
	rm−f ∗.o
	rm −f $(PRJ_BINS)
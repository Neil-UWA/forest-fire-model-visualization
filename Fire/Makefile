# Makefile for CA Model-- Forest fire model
# To build program, just type 'make' in terminal
# To clean it, type 'make clean'

CC		=	gcc
CFLAGS	=	-std=c99 -Wall -Werror -pednatic 

RM		=	rm -rf

OBJ		=	fire.o init.o prob.o update.o plot.o simulate.o 
HRDS	=	fire.h
NAME	=	fire


it: $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

%.o: %.c $(HRDS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:	
	$(RM) *.o  $(NAME)
.PHONY: clean

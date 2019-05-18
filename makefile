CC = gcc
CFLAGS = -Wall -g
OBJS=phonebook.o

%.o : %.c
	$(CC) -c $<
phonebook : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $< 

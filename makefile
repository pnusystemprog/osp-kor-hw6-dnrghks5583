CC = gcc
CFLAGS = -Wall -g
OBJS=phonebook.o register.o printAll.o search.o delete.o
all : phonebook

%.o : %.c
	$(CC) -c -o $@ $(CFLAGS) $<

phonebook : $(OBJS)
	$(CC) -o $@ $<

clean :
	rm phonebook $(OBJ)
 

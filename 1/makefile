CC = gcc

SRCS = main.c

OBJS = $(SRCS:.c=.o)

EXEC = main

start:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS) -L. -lmylib
.c.o:
	$(CC) -o $@ -c $< 
clean:
	rm $(OBJS)


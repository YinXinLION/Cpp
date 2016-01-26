CC = g++

SRCS = main.cpp\
	   udp.cpp

OBJS = $(SRCS:.cpp=.o)

EXEC = myudp

start:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
.cpp.o:
	$(CC) -o $@ -c $<
clean:
	rm $(OBJS)



CC:= gcc
FLAGS:= -g -Wall

all: linkedlist

linkedlist: printNode.o insertNode.o main.o 
	${CC} ${FLAGS} -o linkedlist printNode.o insertNode.o main.o

printNode.o:
	${CC} ${FLAGS} -c printNode.c printNode.h

insertNode.o:
	${CC} ${FLAGS} -c insertNode.c insertNode.h

main.o: main.c
	${CC} ${FLAGS} -c main.c printNode.c insertNode.c

clean:
	rm -rf *.o linkedlist


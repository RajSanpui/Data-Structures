
CC:= gcc
FLAGS:= -g -Wall

all: linkedlist

linkedlist: printNode.o insertNode.o reverseLinkedList.o insertAfter.o findMidNode.o addLoop.o detectLoop.o main.o 
	${CC} ${FLAGS} -o linkedlist printNode.o insertNode.o reverseLinkedList.o insertAfter.o findMidNode.o addLoop.o detectLoop.o main.o

printNode.o:
	${CC} ${FLAGS} -c printNode.c printNode.h

insertNode.o:
	${CC} ${FLAGS} -c insertNode.c insertNode.h

reverseLinkedList.o:
	${CC} ${FLAGS} -c reverseLinkedList.c reverseLinkedList.h

insertAfter.o:
	${CC} ${FLAGS} -c insertAfter.c insertAfter.h

findMidNode.o:
	${CC} ${FLAGS} -c findMidNode.c findMidNode.h

addLoop.o:
	${CC} ${FLAGS} -c addLoop.c addLoop.h

detectLoop.o:
	${CC} ${FLAGS} -c detectLoop.c detectLoop.h

main.o: main.c
	${CC} ${FLAGS} -c main.c printNode.c insertNode.c

clean:
	rm -rf *.o *.gch linkedlist


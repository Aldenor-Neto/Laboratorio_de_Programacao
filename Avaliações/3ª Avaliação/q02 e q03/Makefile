all: q2.e

q2.e: q2.o funcao.o

	gcc -o q2.e q2.o funcao.o

q2.o: q2.c
	gcc -o q2.o -c q2.c
 
 funcao.o: funcao.c
	gcc -o funcao.o -c funcao.c

clean:
	rm -f *.o q2.e

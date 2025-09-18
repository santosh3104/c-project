ABC.exe:main.o pal.o fact.o big.o
	gcc -o ABC.exe main.o pal.o fact.o big.o
main.o:main.c
	gcc -c main.c
pal.o:pal.c
	gcc -c pal.c
fact.o:fact.c
	gcc -c fact.c
big.o:big.c
	gcc -c big.c

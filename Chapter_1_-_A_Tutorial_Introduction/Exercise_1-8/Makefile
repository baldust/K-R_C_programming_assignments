objects = main.o
flags = -Wall

main : $(objects)
	cc $(flags) -o main $(objects)
	astyle *.c
	ctags -R *

.PHONY : clean run

clean :
	rm tags main $(objects)


run : main
	./main < main.c 

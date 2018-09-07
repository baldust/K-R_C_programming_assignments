objects = main.o
flags = -Wall

main : $(objects)
	cc $(flags) -o main $(objects) 

.PHONY : clean run
clean : 
	rm main $(objects)

run : main
	./main < simple_text.txt

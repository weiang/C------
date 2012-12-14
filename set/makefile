
OBJ = add.o main.o 

a.out: $(OBJ)
	g++ -g $(OBJ)
add.o: set.cc set.h add.cc
	g++ -c -g add.cc
main.o:	main.cc 
	g++ -c -g main.cc

clean:
	rm $(OBJ)

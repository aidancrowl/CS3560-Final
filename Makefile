all: count

doc: 
	doxygen config-file.conf

check:
	valgrind ./count
	cppcheck counter.cc

count: counter.o 
	g++ -Wall counter.o -o count

counter.o: counter.cc
	g++ -c counter.cc

clean:
	rm *.o count
	rm -r html latex

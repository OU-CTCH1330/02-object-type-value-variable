all: class_roster

class_roster: class_roster.cpp
	mkdir -p bin
	g++ -g --std=c++17 -c class_roster.cpp
	g++ -g -o bin/class_roster class_roster.o
	chmod 773 class_roster

make test: all
	chmod 773 expect_test
	./expect_test	

clean: 
	-rm -f class_roster class_roster.o
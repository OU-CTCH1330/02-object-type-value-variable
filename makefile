#GPP = g++

SRCS := $(wildcard ./*.cpp)
OBJS := $(patsubst ./%.cpp,obj/%.o,$(SRCS))
EXE := bin/class_roster

.PHONY: all clean pre-build ind-warning

all: pre-build $(EXE)
	chmod 773 $(EXE)

pre-build:
	$(warning  (Conditionally) creating object and executable folders)
	mkdir -p bin obj

$(EXE): $(OBJS)
	$(warning  Linking object files)
	g++ -g $(OBJS) -o $(EXE)

# grab all, use SRCS and OBJS for more control
obj/%.o: ./%.cpp
	g++ -g --std=c++17 -c $< -o $@

make test: all
	chmod 773 expect_test
	./expect_test	

clean: 
	-rm -rf bin/ obj/
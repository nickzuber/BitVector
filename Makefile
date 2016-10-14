# Build source, tests, examples, benchmarks

COMPILER = -c++
FLAGS    = -Wall

BUILD += bitvector
BUILD += examples

all: $(BUILD)

# build the source files
build: bitvector

# build tests
test: examples

# build and run
run: $(BUILD)
	./example

bitvector: src/bit_vector.h src/bit_vector.cpp
	$(COMPILER) $(FLAGS) -c src/bit_vector.cpp

examples: bit_vector.o examples/main.cpp
	$(COMPILER) $(FLAGS) -o example bit_vector.o examples/main.cpp

clean:
	rm -rf *.o example

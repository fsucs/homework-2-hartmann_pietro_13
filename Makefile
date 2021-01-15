all: doc concat
	@echo "All done!"
	
doc: Doxyfile ./src/concat_primes.cpp ./include/example.hpp
	doxygen Doxyfile
	@echo "Documentation extraction complete."

concat: ./src/concat_primes.cpp ./include/example.hpp
	g++ -g -Wall -std=c++11 -I ./include/ ./src/concat_primes.cpp -o ./bin/concat

test: ./src/concat_primes.cpp
	 ./bin/concat test
	
clean:
	rm -rf ./doc/*
	rm -rf ./bin/*

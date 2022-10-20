# Makefile

bin/main : src/main.cpp lib/libvector_math.a Makefile
	g++ -I include/ -L lib/ -o bin/main src/main.cpp -l vector_math

lib/libvector_math.a : lib/vector_helpers.o lib/vector_math.o Makefile
	ar rs lib/libvector_math.a lib/vector_helpers.o lib/vector_math.o

lib/vector_helpers.o : src/vector_helpers.cpp Makefile
	g++ -I include/ -c -o lib/vector_helpers.o src/vector_helpers.cpp

lib/vector_math.o : src/vector_math.cpp Makefile
	g++ -I include/ -c -o lib/vector_math.o src/vector_math.cpp

.PHONY : clean
clean :
	rm -f bin/main lib/vector_math.o lib/vector_helpers.o lib/libvector_math.a

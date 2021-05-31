CXX=g++
CXXFLAGS=-Wall -g3
LDFAGS=-lm

main: main.cpp funciones.o estudiante.o
	$(CXX) $(CXXFLAGS) -o main main.cpp funciones.o estudiante.o $(LDFAGS)

funciones.o: funciones.h funciones.cpp	
	$(CXX) $(CXXFLAGS) -c funciones.cpp

estudiante.o: estudiante.hpp estudiante.cpp
	$(CXX) $(CXXFLAGS) -c estudiante.cpp

clean: 
		rm -fr bin/
		rm -fr *.o main promediosPrueba.csv PromOrdenados.csv maximos.csv artistico.csv humanismo.csv tecnicos.csv

.PHONY: dist
dist: clean main
	mkdir -p bin 
	cp -r main bin/
	rm -fr *.main 

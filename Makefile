#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic

__start__: dron
	./dron

dron: obj/main.o obj/Obiekt3D.o obj/Prostopadloscian.o obj/Macierz.o obj/Wektor.o
	g++ -Wall -pedantic -o dron obj/main.o obj/Obiekt3D.o obj/Prostopadloscian.o obj/Macierz.o obj/Wektor.o

obj/main.o: src/main.cpp inc/Prostopadloscian.hh inc/Obiekt3D.hh inc/Macierz.hh inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Obiekt3D.o: src/Obiekt3D.cpp inc/Obiekt3D.hh inc/Macierz.hh inc/Wektor.hh	
	g++ ${CPPFLAGS} -o obj/Obiekt3D.o src/Obiekt3D.cpp

obj/Prostopadloscian.o: src/Prostopadloscian.cpp inc/Prostopadloscian.hh inc/Obiekt3D.hh inc/Macierz.hh inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/Prostopadloscian.o src/Prostopadloscian.cpp

obj/Macierz.o: src/Macierz.cpp inc/Macierz.hh inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/Macierz.o src/Macierz.cpp

obj/Wektor.o: src/Wektor.cpp inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/Wektor.o src/Wektor.cpp


clean:
	rm -f obj/*.o dron
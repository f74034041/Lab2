main:main.o class.o
	g++ -o main.o class.o
main.o:main.cpp class.h
	g++ -c main.cpp
class.o:class.cpp class.h
	g++ -c class.cpp


clean:
	rm main*.o

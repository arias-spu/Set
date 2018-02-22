set:	set.o mainset.o
	g++ set.o mainset.o -std=c++11 -o set
set.o:	set.cpp set.h
	g++ -c set.cpp -std=c++11
mainset.o:	mainset.cpp set.h
	g++ -c mainset.cpp -std=c++11
clean:
	rm *.o set

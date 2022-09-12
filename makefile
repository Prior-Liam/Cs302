main: Files.o
	g++ -std=c++11 -o hw1 main.o person.o cargo.o
Files.o: main.cpp train.cpp train.h bus.cpp bus.h person.cpp person.h cargo.cpp cargo.h transporter.h
	g++ -std=c++11 -c main.cpp person.cpp cargo.cpp
clean:
	rm *.o hw1
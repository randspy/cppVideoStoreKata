OBJS = cppVideoStore.o Customer.o CustomerTest.o Movie.o Rental.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

kata : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o kata

cppVideoStore.o : src/QUnit.hpp src/CustomerTest.h
	$(CC) $(CFLAGS) src/cppVideoStore.cpp

CustomerTest.o : src/CustomerTest.h src/CustomerTest.cpp src/QUnit.hpp
	$(CC) $(CFLAGS) src/CustomerTest.cpp

Customer.o : src/Customer.h src/Customer.cpp src/Rental.h
	$(CC) $(CFLAGS) src/Customer.cpp

Rental.o : src/Rental.h src/Rental.cpp src/Movie.h 
	$(CC) $(CFLAGS) src/Rental.cpp

Movie.o : src/Movie.h src/Movie.cpp 
	$(CC) $(CFLAGS) src/Movie.cpp



clean:
	\rm *.o kata
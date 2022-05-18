CC = g++
CFLAGS = -g
OTHERFLAGS = -c
main: Principal A B
	$(CC) $(CFLAGS) Principal.o B.o A.o -o BesparteA
Principal: Principal.cpp
	$(CC) $(CFLAGS) $(OTHERFLAGS) Principal.cpp
B: B.cpp
	$(CC) $(CFLAGS) $(OTHERFLAGS) B.cpp
A: A.cpp
	$(CC) $(CFLAGS) $(OTHERFLAGS) A.cpp

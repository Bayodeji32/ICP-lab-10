# A simple makefile template for creating an executable mainProg
CC = g++
C11STD = -std=c++11
DEBUG = -g
CFLAGS = $(C11STD) -Wall -c $(DEBUG)
LFLAGS = $(C11STD) -Wall $(DEBUG)

OBJS = readPoints.o readLines.o printLinesByCoords.o getStabbedLines.o
testStabLineProg: $(OBJS)
$(CC) $(LFLAGS) $(OBJS) -o testStabLineProg

readPoints.o= stabbingLines.h readPoints.cpp
$(CC) $(CFLAGS) readPoints.cpp

readLines.o= stabbingLines.h readLines.cpp
$(CC) $(CFLAGS) readLines.cpp

printLineByCoords.o= stabbingLines.h printLineByCoords.cpp
$(CC) $(CFLAGS) printLineByCoords.cpp

getStabbedLines.o= stabbingLines.h getStabbedLines.cpp
$(CC) $(CFLAGS) getStabbedLines.cpp

clean:
	\rm*.o* ̃ testStabLine
# Alternatively rm -rf*.o* ̃ testStabLine
tar:
	tar cvf tar cvf mainProg.tar readPoints.cpp readLines.cpp printLineByCoords.cpp getStabbedLines.cpp stabbingLines.h

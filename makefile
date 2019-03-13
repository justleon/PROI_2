CC = g++

ComNum: main.o ComplexNum.o ComplexStack.o HelpFuncs.o
	$(CC) -O3 main.o ComplexNum.o ComplexStack.o HelpFuncs.o -o $@.out

debug: main.o ComplexNum.o ComplexStack.o HelpFuncs.o
	$(CC) -g -Wall -pedantic main.o ComplexNum.o ComplexStack.o HelpFuncs.o -o $@.out

main.o: main.cpp ComplexNum.h HelpFuncs.h
	$(CC) -c main.cpp ComplexNum.h HelpFuncs.h

ComplexNum.o: ComplexNum.cpp ComplexNum.h HelpFuncs.h
	$(CC) -c ComplexNum.cpp ComplexNum.h HelpFuncs.h

ComplexStack.o: ComplexStack.cpp ComplexStack.h ComplexNum.h HelpFuncs.h
	$(CC) -c ComplexStack.cpp ComplexStack.h ComplexNum.h

HelpFuncs.o: HelpFuncs.cpp HelpFuncs.h
	$(CC) -c HelpFuncs.cpp HelpFuncs.h

#clean
yeet:
	rm -f *.o *.out
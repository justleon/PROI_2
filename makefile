CC = g++

ComNum: main.o ComplexNum.o
    $(CC) main.o ComplexNum.o -o $@.out

main.o: main.cpp ComplexNum.h
    $(CC) -c main.cpp ComplexNum.h

ComplexNum.o: ComplexNum.cpp ComplexNum.o
    $(CC) -c ComplexNum.cpp ComplexNum.h

clean:
    rm -f *.o *.out
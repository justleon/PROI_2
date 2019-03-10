CC = g++

ComNum: main.o ComplexNum.o HelpFuncs.o
    $(CC) main.o ComplexNum.o HelpFuncs.o -o $@.out

main.o: main.cpp ComplexNum.h HelpFuncs.h
    $(CC) -c main.cpp ComplexNum.h HelpFuncs.h

ComplexNum.o: ComplexNum.cpp ComplexNum.h HelpFuncs.h
    $(CC) -c ComplexNum.cpp ComplexNum.h HelpFuncs.h

HelpFuncs.o: HelpFuncs.cpp HelpFuncs.h
	$(CC) -c HelpFuncs.cpp HelpFuncs.h

clean:
    rm -f *.o *.out
f1.o: f1.c math.h
    gcc -c f1.c 

f2.o: f2.c math.h
    gcc -c f2.c 

libMath.a: f1.o f2.o
    ar rc libMath.a f1.o f2.o
    ranlib libMath.a

main.exe: main.c math.h
    gcc main.c -L. -lMath -o main


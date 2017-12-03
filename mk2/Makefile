cal: calsi.o add.o mul.o
	cc -o cal calsi.o add.o mul.o
calsi.o: calsi.c add.h mul.h
	cc -c calsi.c
add.o: add.c
	cc -c add.c
mul.o: mul.c
	cc -c mul.c
clean:
	-rm -f mul.o 
	-rm -f calsi.o 
	-rm -f add.o


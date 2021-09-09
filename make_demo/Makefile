CC=gcc
CFLAGS= -Wall --pedantic-errors -Werror --std=c11
TARGETS=basic.out imath.out

all: ${TARGETS}

basic.out: basic.o
	${CC} -o $@ $^ ${CLAGS}

imath.out: imath.o
	${CC} -o $@ $^ ${CLAGS}

clean:
	rm -rf *.o *.out
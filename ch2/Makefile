CC=gcc
CFLAGS=-I.

all: insertionsort selectionsort insertionsort_dec

insertionsort: insertionsort.c
	gcc -o insertionsort insertionsort.c

insertionsort_dec: insertionsort_dec.c
	gcc -o insertionsort_dec insertionsort_dec.c

selectionsort: selectionsort.c
	gcc -o selectionsort selectionsort.c


clean:
	rm -rf insertionsort
	rm -rf selectionsort
	rm -rf insertionsort_dec

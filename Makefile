all: mysystem

mysystem: mysystem.c
	cc -Wall -std=c99 -o mysystem mysystem.c


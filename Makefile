all: main

main: src/chessviz/main.c
	gcc -Wall -Werror src/chessviz/main.c

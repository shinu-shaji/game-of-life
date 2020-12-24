cc=gcc
lin0=-pthread
lin1=-lncurses

all:install

install:display.c gol_config.h cells gol
	gcc $(lin0)  gol.o display.o cells.o $(lin1) -o game
	#gcc $(lin0)  gol.o display.o cells.o $(lin1) -o game
gol:gol.c
	gcc -c gol.c -o gol.o
cells: cells.c
	gcc -c cells.c -o cells.o
	#gcc -c vish_cell.c -o cells.o
display: display.c
	gcc -c display.c -o display.o
run:
	cat seed_input_32_x_16.txt.2 | ./game

CFLAGS=-Wall -ansi -pedantic -Werror -std=c11
LIBRARIES=-lreadline
CC=gcc
EXES= microbash.o microbash

.PHONY: all
all: $(EXES)

microbash.o: microbash.c
	$(CC) $^ -o $@ $(LIBRARIES) $(CFLAGS)

microbash: microbash.c
	$(CC) $^ -o $@ $(LIBRARIES) $(CFLAGS) -ggdb -Og

.PHONY: clean
clean:
	rm -f $(EXES)

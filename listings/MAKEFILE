CFLAGS=-Wall -ansi -pedantic -Werror -std=c11
CC=clang
EXES=cpu mem threads.vo threads.v1 threads_101

all: $(EXES)

cpu: cpu.c
	$(CC) $(CFLAGS) -o $@ $^

cpu: mem.c
	$(CC) $(CFLAGS) -o $@ $^

threads.v0: threads.v0.c
	$(CC) $(CFLAGS) -o $@ $^ -pthread

threads.v1: threads.v0.c
	$(CC) $(CFLAGS) -o $@ $^ -pthread

threads_101: threads.v0.c
	$(CC) $(CFLAGS) -o $@ $^ -pthread

clean:
	rm -f $(EXES)

.PHONY: clean

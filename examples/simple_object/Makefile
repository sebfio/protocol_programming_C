CC=gcc
INC_DIR= ../..
CFLAGS=-I$(INC_DIR) -std=c11 -fms-extensions

EXE=simple_object

DEPS = person.c main.c ../../Object.c 

$(EXE): $(DEPS)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf ../../*.o

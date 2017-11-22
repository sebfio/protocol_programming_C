CC=gcc
INC_DIR= ../..
CFLAGS=-I$(INC_DIR)  

EXE=simple_extends

DEPS = canadian.c person.c main.c ../../Object.c 

$(EXE): $(DEPS)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf ../../*.o

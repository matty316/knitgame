TARGET = bin/knitgame
SRC = $(wildcard src/*.c)

default: $(TARGET)

clean:
	rm -f bin/*

$(TARGET): $(SRC)
	clang -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o $@ $? 


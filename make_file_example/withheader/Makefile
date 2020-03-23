IDIR=./inc
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
SDIR=src

#LIBDIR=
LFLAGS=-lpthread

_DEPS=test.hpp
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ=test.o main.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(LFLAGS)

.PHONY: clean
clean:
	rm -rf $(ODIR)/*.o main

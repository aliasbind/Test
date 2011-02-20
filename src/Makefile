PROG=test
OBJ=$(PROG).o

all: $(PROG)

$(PROG): $(OBJ)
	gcc $(OBJ) -o $(PROG)

%.o: %.c
	gcc -c $^

clean:
	rm $(PROG) $(OBJ)

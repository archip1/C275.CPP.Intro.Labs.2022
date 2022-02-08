CC = g++
CC_FLAGS = -std=c++11

BINARIES = fibonacci factorial powers quadrant

all: $(BINARIES)

fibonacci: fibonacci.cpp
	$(CC) $(C_FLAGS) -o $@ $<

factorial: last_factorial_digit.cpp
	$(CC) $(C_FLAGS) -o $@ $<

powers: powers.cpp
	$(CC) $(C_FLAGS) -o $@ $<

quadrant: quadrantSelection.cpp
	$(CC) $(C_FLAGS) -o $@ $<

clean:
	rm -f $(BINARIES) $(OBJS)
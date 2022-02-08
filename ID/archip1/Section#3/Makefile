CC = g++
CC_FLAGS = -std=c++11

BINARIES = average secondlast carrots

all: $(BINARIES)

average: average.cpp
	$(CC) $(C_FLAGS) -o $@ $<

secondlast: second_to_last_digit.cpp
	$(CC) $(C_FLAGS) -o $@ $<

carrots: solving_for_carrots.cpp
	$(CC) $(C_FLAGS) -o $@ $<

clean:
	rm -f $(BINARIES) $(OBJS)
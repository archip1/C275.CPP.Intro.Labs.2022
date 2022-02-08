# Target: Prerequisite

# $@ is the name of the target
# $^ is the name of all the prerequisite

# Defining some variables using $()
CC = g++
CC_FLAGS = -std=c++11

BINARIES = helloworld R2 sum

all: $(BINARIES)

helloworld: helloworld.cpp
	$(CC) $(C_FLAGS) -o $@ $<

R2: R2.cpp
	$(CC) $(C_FLAGS) -o $@ $<

sum: sum_of_two_inputs.cpp
	$(CC) $(C_FLAGS) -o $@ $<

clean:
	rm -f $(BINARIES) $(OBJS)
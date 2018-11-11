# Declaration of variables
CC = g++
CC_FLAGS = -w -g

# File names
EXEC = run
SOURCES = $(wildcard *.cpp) \
					$(wildcard app/*.cpp) \
					$(wildcard app/mapper/*.cpp) \
					$(wildcard app/models/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Main target
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

# To obtain object files
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

# To remove generated files
clean:
	rm -f $(EXEC) $(OBJECTS)

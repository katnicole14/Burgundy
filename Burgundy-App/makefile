
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Directory structure
SRCDIR = .
BUILDDIR = build
BINDIR = bin

# Find all source files in SRCDIR
SOURCES := $(wildcard $(SRCDIR)/*.cpp)

# Create object file names from source files
OBJECTS := $(SOURCES:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)

# The name of the final executable
EXECUTABLE = $(BINDIR)/my_program

# Default target: build the executable
all: $(EXECUTABLE)

# Rule to compile source files into object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to link object files into the executable
$(EXECUTABLE): $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) $(OBJECTS) -o $@

# Clean target: remove generated files
clean:
	$(RM) -r $(BUILDDIR) $(BINDIR)

.PHONY: all clean

run:
	./$(EXECUTABLE)

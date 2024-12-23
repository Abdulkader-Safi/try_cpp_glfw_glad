# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude -I/opt/homebrew/include

# Linker flags
LDFLAGS = -L/opt/homebrew/lib -lglfw -ldl -framework OpenGL

# Target binary and source files
TARGET = out/main
SRC = src/main.cpp src/glad.cpp
# HEADERS = -Isrc/learnopengl/shader_s.h

# Include and library directories
INCLUDE_DIRS = -Iinclude -I/opt/homebrew/include
LIB_DIRS = -L/opt/homebrew/lib


$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(INCLUDE_DIRS) $(SRC) -o $(TARGET) $(LDFLAGS)

# Clean rule to remove build artifacts
clean:
	rm -f $(TARGET)

# Run the compiled program
run:
	clear
	$(TARGET)

# Phony targets to avoid conflicts with files named 'all' or 'clean'
.PHONY: all clean
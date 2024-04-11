# Directorios
SRC_DIR := src
TEST_DIR := test/catch

# Compilador
CXX := g++

# Flags de compilación, incluyendo los directorios para headers
CXX_FLAGS := -I$(SRC_DIR) -I$(TEST_DIR) -std=c++20

# Encuentra archivos .cpp
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
TEST_FILES := $(wildcard $(TEST_DIR)/*.cpp)

# Todos los archivos fuente
SOURCES := $(SRC_FILES) $(TEST_FILES)

# Nombre del ejecutable
TARGET := autograde

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXX_FLAGS) -o $(TARGET) $(SOURCES)

.PHONY: clean
clean:
	rm -f $(TARGET)

.PHONY: test
test: all
	./$(TARGET)

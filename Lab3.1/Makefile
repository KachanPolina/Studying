CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

TARGET = app
SOURCES = main.cpp Dish.cpp Order.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

main.o: main.cpp Dish.h Order.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Dish.o: Dish.cpp Dish.h
	$(CXX) $(CXXFLAGS) -c Dish.cpp -o Dish.o

Order.o: Order.cpp Order.h Dish.h
	$(CXX) $(CXXFLAGS) -c Order.cpp -o Order.o

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I h -c
LXXFLAGS = -std=c++17 -Ih -pthread
OBJECTS = ./obj/main.o ./obj/rubik.o ./obj/algorithm.o ./obj/apmp.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS)
./obj/main.o: ./cpp/main.cpp
	$(CXX) $(CXXFLAGS) ./cpp/main.cpp -o ./obj/main.o
./obj/rubik.o: ./cpp/rubik.cpp
	$(CXX) $(CXXFLAGS) ./cpp/rubik.cpp -o ./obj/rubik.o
./obj/algorithm.o: ./cpp/algorithm.cpp
	$(CXX) $(CXXFLAGS) ./cpp/algorithm.cpp -o ./obj/algorithm.o
./obj/apmp.o: ./cpp/apmp.cpp
	$(CXX) $(CXXFLAGS) ./cpp/apmp.cpp -o ./obj/apmp.o
clean:
	rm -fv $(TARGET) $(OBJECTS)

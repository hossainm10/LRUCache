 CXX=g++
 CXXFLAGS=-g -Wall -Wextra -std=c++17 -I include/

 TARGET=lru.out
 SRCS= $(wildcard src/*.cpp)
 all: $(TARGET)
   
  
$(TARGET): $(SRCS)
	$(CXX) $(SRCS)  $(CXXFLAGS) -o $(TARGET) 


clean:
	rm -f $(TARGET)

 
.PHONY: all clean t

TARGET = Component.so
OBJS = Component.o
SRC = Component.cpp

BINDIR = ./bin
LIBDIR = ./lib

CXX = g++-5
CXXFLAGS = -g -Wall -std=c++11 -fPIC

.PHONY : clean all

$(TARGET) : $(OBJS)
	mkdir -p $(LIBDIR)
	$(CXX) -shared -o $(LIBDIR)/$@ $^

$.o : $.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean : 
	rm -rf $(BINDIR) $(LIBDIR) $(OBJS) $(TARGET)

all : 
	mkdir -p $(LIBDIR)
	$(CXX) $(CXXFLAGS) -shared -o $(LIBDIR)/$(TARGET) $(SRC)

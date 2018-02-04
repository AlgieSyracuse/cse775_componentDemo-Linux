TARGET = libComponent.so
OBJS = Component.o
SRC = Component.cpp

BINDIR = ../bin

CXX = g++-5
CXXFLAGS = -g -Wall -std=c++11 -fPIC

.PHONY : clean all

$(TARGET) : $(OBJS)
	mkdir -p $(BINDIR)
	$(CXX) -shared -o $(BINDIR)/$@ $^

$.o : $.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean : 
	rm -rf $(BINDIR)/$(TARGET) $(OBJS) $(TARGET)

all : 
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -shared -o $(BINDIR)/$(TARGET) $(SRC)

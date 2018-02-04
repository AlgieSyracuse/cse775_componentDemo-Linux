TARGET = ExplicitClient
SRC = 
OBJS = Explicit_Load_Component.o


BINDIR = ../bin

CXX = g++-5
CXXFLAGS = -g -Wall -std=c++11
LIB = -ldl

.PHONY : clean all run

$(TARGET) : $(OBJS)
	mkdir -p $(BINDIR)
	$(CXX) -o $(BINDIR)/$@ $^  $(LIB)

$.o : $.cpp
	$(CXX) $(CXXFLAGS)  -c $<   

clean : 
	rm -rf $(BINDIR)/$(TARGET) $(OBJS)

all : clean $(TARGET)

run :
	$(BINDIR)/$(TARGET)
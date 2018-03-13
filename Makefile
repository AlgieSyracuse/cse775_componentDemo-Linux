TARGET = ExplicitClient

EXECDIR = ./ComponentExplicitClient
LIBDIR = ./Component
BINDIR = ./Debug


.PHONY : clean all run   

build :
	cd $(LIBDIR) && $(MAKE)
	cd $(EXECDIR) && $(MAKE)

run:
	cd $(EXECDIR) && $(MAKE) run

clean : 
	cd $(LIBDIR) && $(MAKE) clean
	cd $(EXECDIR) && $(MAKE) clean

all : clean build run



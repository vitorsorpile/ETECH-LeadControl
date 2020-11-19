CXXFLAGS = -std=c++17 -Wall -Werror
APPNAME = App

all: $(APPNAME)

$(APPNAME): empresa.o lead.o $(APPNAME).o main.o 
		g++ -o $(APPNAME) empresa.o lead.o $(APPNAME).o main.o
empresa.o: empresa.cpp
		g++ $(CXXFLAGS) -o empresa.o -c Empresa.cpp
lead.o: lead.cpp
		g++ $(CXXFLAGS) -o lead.o -c Lead.cpp
$(APPNAME).o: $(APPNAME).cpp
		g++ $(CXXFLAGS) -o $(APPNAME).o -c $(APPNAME).cpp
main.o: main.cpp
		g++ $(CXXFLAGS) -o main.o -c main.cpp

clean:
		rm -rf *.o
mrproper: clean
		rm -rf $(APPNAME)
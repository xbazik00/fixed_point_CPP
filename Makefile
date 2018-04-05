CXX=g++ -std=c++14
BOOST=-I/usr/include/boost

LDFLAGS=-lcurl -pthread -lboost_filesystem -lboost_system

all: fixed-test

fixed-test: fixed.cpp fixed.h
	$(CXX) $(BOOST) -o $@ $^ $(LDFLAGS)

clean:
	rm *.o fixed-test
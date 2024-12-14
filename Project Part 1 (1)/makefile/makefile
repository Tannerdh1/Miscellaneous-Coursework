run: driver.o model.o

driver.o: driver.cc model.h
	g++ -c driver.cc

model.o: model.cpp
	g++ -c model.cpp

clean:
	rm -fr *.o driver

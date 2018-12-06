EXECS = Tester
OBJS = Tester.cpp Person.cpp Student.cpp
CC = g++
CCFLAGS = -Wall -Wno-deprecated -Werror=return-type -g

all: $(EXECS)

Tester: $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@

%.o: %.cpp *.h
	$(CC) $(CCFLAGS) -c $<

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $<

	clean:
		/bin/rm -f a.out $(OBJS) $(EXECS)

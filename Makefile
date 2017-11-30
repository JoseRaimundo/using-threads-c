
include Makefile.top


MODULE	= main

CFLAGS 	= -lpthread

SOURCES = \
	Thread.cpp\
	TestThread.cpp\
    main.cpp


.SUFFIXES: .cpp .o .h

include Makefile.build

default: all
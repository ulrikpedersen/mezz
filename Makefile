CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

SRCDIR = src/
SRCS =      src/mezz.cpp src/MyFeature.cpp
OBJS =		$(SRCS:.cpp=.o)
LIBS =
TARGET =	mezz

$(TARGET):	$(OBJS)
	echo $(OBJS) 
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

# These docs rules could be so much more elegant...
docs: $(SRCS)
	doxygen
	sphinx-build -b html docs/source/ docs/build/

cleandocs:
	rm -rf docs/build/* doxyxml/* docs/build/.buildinfo docs/build/.doctrees/
	
all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

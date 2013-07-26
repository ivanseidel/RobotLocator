CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Localization.o Control.o Measurement.o  State.o SimpleRobotParticleFilter.o

LIBS =

TARGET =	Localization

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

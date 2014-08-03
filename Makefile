OBJS	:=	$(addsuffix	.o,	classes)

all:	$(OBJS)	main.cpp
	g++	$(OBJS)	main.cpp	-o	deckSimulator

%.o:	%.cpp
	g++	-c	$<

clean:
	rm	-f	*.o	deckSimulator
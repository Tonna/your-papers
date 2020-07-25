game: game.c Makefile
	$(CC) -std=c99 -g3 -o game.o -DUSE_GLX_CREATE_CONTEXT_ATTRIB=1 -DUSE_GLX_CREATE_WINDOW=1 game.c -lX11 -lXrender -lGL -lm


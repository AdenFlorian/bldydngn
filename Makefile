# TODO: Can't make on Windows, try and see error

outputexe = bloodydungeon

$(outputexe): main.c
	cc -o $(outputexe) main.c

clean:
	rm -rf $(outputexe) $(outputexe).exe

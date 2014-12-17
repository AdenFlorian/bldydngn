outputexe = bloodydungeon

$(outputexe): main.c
	cc -o $(outputexe) main.c

clean:
	rm -rf $(outputexe) 

src=src
output=target
lib=src/sqlite3.c

$(output)/main.exe: $(src)/main.c 
	gcc $< $(lib) -o $@


run:
	./$(output)/main.exe

clean:
	rm $(output)/*
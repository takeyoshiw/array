CC = gcc
CFLAGS = -std=c99
TARGET = a.out

$(TARGET): main.c
	$(CC) $(CFLAGS) $^ -o $(@)
	
test: $(TARGET)
	@./a.out < ${input} > result.txt
#	@ls -lsa
#	@echo "$(<result.txt)"
	@if diff result.txt ${expect} > /dev/null; then echo "test: OK"; else echo "test: NG"; echo "*** input:"; cat ${input}; echo "*** output:"; cat ${expect}; echo "*** result:"; cat result.txt; exit 1; fi

clean:
	rm -f output.txt $(TARGET)

CHECK_CFLAGS=$(shell pkg-config --cflags check)
CHECK_LDFLAGS=$(shell pkg-config --libs check)
SRC_FILES=tmc-check.c test-file.c ../src/tested.c

all: test

test: $(SRC_FILES)
	gcc $(CHECK_CFLAGS) -Wall -o $@ $(SRC_FILES) $(CHECK_LDFLAGS)

clean:
	# rm -f test tmc_available_points.txt tmc_test_results.xml valgrind.log

get-points:
	./test --print-available-points

run: test
	# Printing available points
	./test --print-available-points
	# Running test. There should be one success and one failure.
	./test

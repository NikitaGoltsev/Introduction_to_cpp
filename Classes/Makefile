format:
	clang-format -i *.cpp

git_avg:
	git add *
	git commit -m "avg_save"
	git push

all: build run
	rm *.out

build:
	gcc main.cpp -o main.out

run:
	./main.out
format:
	clang-format -i *.cpp

git_avg:
	git add *
	git commit -m "avg_save"
	git push

all: build run
	rm *.out

build:
	g++ main.cpp -o main.out

run:
	./main.out

cat_rn:
	g++ catclass.cpp -o cat.out
	./cat.out
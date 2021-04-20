comp: 
	cd ./test; g++ -std=c++11 tests.cpp -o tests
change_dir: 
	cd ./test
clean:
	rm tests
test_zero:comp
	cd ./test; bash tests.sh 0
test_one : comp
	cd ./test; bash tests.sh 1
test_two : comp
	cd ./test; bash tests.sh 2
test_three : comp
	cd ./test; bash tests.sh 3
test_all : 
	make test_zero
	make test_one
	make test_two
	make test_three
aod:main.cc server.hpp
	g++ -o $@ $^ -ljsoncpp -lpthread -lmariadb -L ./httplib -std=c++14

.PHONY:clean
clean:
	rm -rf aod
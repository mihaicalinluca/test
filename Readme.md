
***CONFIGURATION***
- C++17
- CMake 3.16.3
- nlohmann_json 3.7.3
- Ubuntu 20.04.3
- gcc 9.4.0

***BUILD AND RUN INSTRUCTIONS***
- install cmake

	sudo apt install cmake
	
- install nlohmann_json library

	sudo apt-get install nlohmann-json-dev

				OR
				
	sudo apt-get install nlohmann-json3-dev

- create a build folder inside the test folder
	
	mkdir build
	
- go inside the build folder from the test folder
	
	cd build 
	
- create the makefile with cmake

	cmake ..

- create the exe

	make

- run the exe

	./MyExec

	

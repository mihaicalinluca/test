#pragma once
#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp" 

using json = nlohmann::json;  //library for working with JSON files

struct info {   //struct object that represents a JSON element of the JSON array

	std::string type;
	float num1;
	float num2;

};


 class Helper {

 public:

	 static IHandler *getTaskHandler(std::string taskType) {


		 IHandler* handler = nullptr;

		 if (taskType == "ADD") {

			 handler = new AddHandler();
			

		 }
		 
		 if (taskType == "SUB") {

			 handler = new SubHandler();
			

		 } 
		 
		 if (taskType == "DIV") {

			 handler = new DivHandler();
			

		 } 
		 
		 if (taskType == "MUL") {

			 handler = new MulHandler();
			
		 }

		 return handler;

	}


	static std::vector<info> getTasks() {   //method that deals with JSON files 
											//and returns data in a structured way

		std::ifstream file("../tasks.json");  //read the file
		std::vector<info> VecOfStructs; //vector of structs that represent the fields of the JSON array

		try {

			json js = json::parse(file);    //load and parse
		
			info OneStruct;

		
			for (auto& elem : js["tasks"]) {    //populate the VecOfStructs with struct objects  
											     //that represent each entry
											      //from the JSON
				OneStruct.type = elem["type"];
				OneStruct.num1 = elem["num1"];
				OneStruct.num2 = elem["num2"];

				VecOfStructs.push_back(OneStruct);

			}

			  

		}
		catch (...) {

			std::cout << "Didn't work! The file has to be valid and the field components need to be float, no letters or symbols." << std::endl;
			//error handling for invalid file or/and invalid parameter types
		}
		return VecOfStructs;
	 }





	static void showStruct(std::vector<info> StructVector) {   //method for printing a vector of struct objects

		for (auto i = 0; i < StructVector.size(); ++i) {

			std::cout << StructVector[i].type << " " << StructVector[i].num1 << " " << StructVector[i].num2 << std::endl;

		}

	 }
	
	






};
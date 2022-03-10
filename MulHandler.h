#pragma once


class MulHandler: public IHandler {  //handler for MUL task

public:
	

	float processTask(float A, float B) {  //definition of the interface on class level

		return A * B;

	}

	static float mulFunction(float A, float B) {  //method to process the specific task 

		return A * B;

	}


};
#pragma once


class SubHandler: public IHandler {  //handler for SUB task

public:


	float processTask(float A, float B) {  //definition of the interface on class level

		return A - B;

	}

	static float subFunction(float A, float B) {  //method to process the specific task

		return A - B;

	}



};
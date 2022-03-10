#pragma once


class AddHandler:public IHandler {  //handler for ADD task

public: 


	float processTask(float A, float B) {   //definition of the interface on class level

		return A + B;

	}

	static float addFunction(float A, float B) {  //method to process the specific task

		return A + B;

	}


};
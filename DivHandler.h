#pragma once


class DivHandler: public IHandler {  //handler for DIV task

public:

	float processTask(float A, float B) {  //definition of the interface on class level

		if (B == 0) {

			std::cout << "Can't divide by 0" << std::endl;
			return 0;

		}
		return A / B;

	}

	static float divFunction(float A, float B) {  //method to process the specific task

		return A / B;

	}

};
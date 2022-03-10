#pragma once

class IHandler {  //interface handler

public:

	virtual float processTask(float num1, float num2) = 0; 
	//interface so that a new task can be implemented faster


};
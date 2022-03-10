#include <iostream>
#include "IHandler.h"
#include "AddHandler.h"
#include "SubHandler.h"
#include "MulHandler.h"
#include "DivHandler.h"
#include "Helpers.h"



class Helper;



int main()
{

    std::vector<info> VecOfStructs;
    VecOfStructs = Helper::getTasks();

    /*Helper::showStruct(VecOfStructs);*/


    for (auto i = 0; i < VecOfStructs.size(); i++) {

        IHandler* handler = Helper::getTaskHandler(VecOfStructs[i].type);

        if (handler == nullptr) {

            std::cout << "Invalid task type!" << std::endl; //error handling for invalid task
            return 1;
        }

        float result = handler->processTask(VecOfStructs[i].num1, VecOfStructs[i].num2);  //using interface

        std::cout << result << std::endl;

        delete handler;


    }


}


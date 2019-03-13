/*
 * Author: Łukasz Pokorzyński, Warsaw University of Technology
 * Implementation of functions from HelpFuncs.h
 */

#include <iostream>
#include "HelpFuncs.h"

std::string checkSign(double i){
   return (i > 0) ? "+" : "";
}

bool checkAlloc(void* node)
{
   if(node == nullptr)
   {
      std::cout << "Memory allocation failed! Aborting..." << std::endl;
      return false;
   } else{
      return true;
   }
}
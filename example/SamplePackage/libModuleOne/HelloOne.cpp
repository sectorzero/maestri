////////////////////////////////////////////////////////////////////////////////
//
// ©© Creative Commons Licence 2010 SectorZero ( bitsewer@gmail.com ). 
//
// $Id$
// $DateTime$
// $Author$
// $Change$
//
// Description : 
// 
//
////////////////////////////////////////////////////////////////////////////////
#include "libModuleOne/HelloOne.h"
#include <sstream>
#include <math.h>

using namespace sample;

HelloOne::HelloOne() {}

HelloOne::HelloOne(const HelloOne& other) {}

HelloOne& HelloOne::operator=(const HelloOne& other) {}

HelloOne::~HelloOne() {}

string HelloOne::hello(const double seed)
{
    double key = pow(2, seed);

    stringstream ss;
    ss << "Hello [";
    ss << key;
    ss << "]";

    return ss.str();
}

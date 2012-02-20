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
#include "libModuleTwo/HelloTwo.h"
#include <math.h>
#include <sstream>

using namespace sample;

HelloTwo::HelloTwo() {}

HelloTwo::HelloTwo(const HelloTwo& other) {}

HelloTwo& HelloTwo::operator=(const HelloTwo& other) {}

HelloTwo::~HelloTwo() {}

string HelloTwo::hello(const double seed)
{
    double key = sqrt(seed);

    stringstream ss;
    ss << "Sayonara [";
    ss << key;
    ss << "]";

    return ss.str();
}

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
#include "libModuleTwo/HelloTwo.h"

#include <iostream>

using namespace sample;
using namespace std;

int main(int argc, const char *argv[])
{
    HelloOne one;
    cout << one.hello(3.142) << endl;

    HelloTwo two;
    cout << two.hello(3.142) << endl;

    return 0;
}

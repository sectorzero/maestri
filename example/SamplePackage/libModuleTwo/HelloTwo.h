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
#ifndef __LIBMODULETWO_HELLOTWO_H_ 
#define __LIBMODULETWO_HELLOTWO_H_ 

// System Includes
#include <string>
#include <iostream>

using namespace std;

namespace sample 
{

    class HelloTwo
    {
        public : 
            HelloTwo();
            HelloTwo(const HelloTwo& other);
            HelloTwo& operator=(const HelloTwo& other);
            ~HelloTwo();
            string hello(const double seed);
    };
}

#endif    // ---- #ifndef __LIBMODULETWO_HELLOTWO_H_ ----

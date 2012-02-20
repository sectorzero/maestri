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
#ifndef __LIBMODULEONE_HELLOONE_H_ 
#define __LIBMODULEONE_HELLOONE_H_ 

// System Includes
#include <string>
#include <iostream>

using namespace std;

namespace sample 
{
    class HelloOne
    {
        public : 
            HelloOne();
            HelloOne(const HelloOne& other);
            HelloOne& operator=(const HelloOne& other);
            ~HelloOne();
            string hello(const double seed);
    };
}

#endif    // ---- #ifndef __LIBMODULEONE_HELLOONE_H_ ----

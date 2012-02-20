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
// Project Includes
#include "libModuleOne/HelloOne.h"

// CppUnit includes
#include <cppunit/CompilerOutputter.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/TextTestProgressListener.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>

// System Includes
#include <iostream>
#include <string>

// Namespaces
using namespace sample;;
using namespace std;

// Unit Test Class
class TestHelloOne : public CppUnit::TestCase
{
    public:
        // --------------------------------------------------------------------
        // TestCase : SimpleCase
        // --------------------------------------------------------------------
        void testSimpleCase(void)
        { 
            HelloOne a;
            cout << a.hello(3.6) << endl;
        }

    public:
        CPPUNIT_TEST_SUITE(TestHelloOne);
        // >>
        CPPUNIT_TEST(testSimpleCase);
        // <<
        CPPUNIT_TEST_SUITE_END();

    public : 
        void setUp(void) {}
        void tearDown(void) {} 

    private :

};

CPPUNIT_TEST_SUITE_REGISTRATION(TestHelloOne);

// Unit Test Main ( Boilerplate )
int main(int argc, char **argv)
{
    // TestResult
    CPPUNIT_NS::TestResult result;
    CPPUNIT_NS::TestResultCollector resultCollector;
    result.addListener(&resultCollector);
    CPPUNIT_NS::BriefTestProgressListener briefListener;
    result.addListener(&briefListener);
    CPPUNIT_NS::TextTestProgressListener progressListener;
    result.addListener(&progressListener);
    
    // TestRunner
    CPPUNIT_NS::TextUi::TestRunner runner;
    
    // Initialize TestRunner from Registry
    CPPUNIT_NS::TestFactoryRegistry &registry = CPPUNIT_NS::TestFactoryRegistry::getRegistry();
    runner.addTest( registry.makeTest() );
    
    // Run tests
    runner.run( result );
    
    // Result output
    CPPUNIT_NS::CompilerOutputter outputter(&resultCollector, std::cerr);
    outputter.write();
    
    // Return value to builder
    bool success = resultCollector.wasSuccessful();
    return success ? 0 : 1;
}
